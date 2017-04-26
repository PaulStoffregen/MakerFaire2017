#include <Wire.h>

elapsedMillis sinceTempo;

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <stdint.h>  //touchscreeen
#include "TouchScreen.h"

// These are the pins for the touchscreen
#define YP A3  // must be an analog pin, use "An" notation!
#define XM A4  // must be an analog pin, use "An" notation!
#define YM 8   // can be a digital pin
#define XP 9   // can be a digital pin
#define TsPot1 A5 // 
#define TsPot2 A6 // 
#define TsPot3 A7 // 
int TsPot1Val = 0;
int TsPot2Val = 0;
int TsPot3Val = 0;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);  //use a multimeter to read the resistance between X+ and X- and replace value which is currently 300.

int tempo=120;
int stepCount;

int touchSensor1 = 0;
int touchSensor2 = 0;
int touchSensor3 = 0;
int touchSensor4 = 0;
int touchSensor5 = 0; 

int pot1Raw = 0; 
int pot2Raw = 0; 
int pot3Raw = 0;

int averageMinimum = 0; 

float minimum = 0; 
float smoothness = 0; 

boolean gate1[2];

float sensorMinimum1 = 0; 
float sensorSmoothness1 = 0; 
float filterCutoff1 = 0; 

// GUItool: begin automatically generated code
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioPlayMemory          sound1;         //xy=584.515625,393.9999974370003
AudioPlayMemory          sound0;         //xy=585.515625,343.9999974370003
AudioPlayMemory          sound2;         //xy=588.515625,439.9999974370003
AudioPlayMemory          sound3;         //xy=591.515625,489.9999974370003
AudioPlayMemory          sound4;         //xy=772.515625,614.9999974370003
AudioMixer4              mix1;           //xy=778.515625,545.9999974370003
AudioSynthWaveform       waveform1;      //xy=810.5156593322754,372.00001883506775
AudioMixer4              mix2;           //xy=925.515625,563.9999974370003
AudioFilterStateVariable filter1;        //xy=945.5156593322754,378.00001883506775
AudioEffectEnvelope      envelope1;      //xy=1080.5156593322754,365.00001883506775
AudioMixer4              mix3;         //xy=1262.515625,588.9999974370003
AudioOutputI2S           i2s2;           //xy=1406.515625,594.9999974370003
AudioConnection          patchCord1(sound1, 0, mix1, 1);
AudioConnection          patchCord2(sound0, 0, mix1, 0);
AudioConnection          patchCord3(sound2, 0, mix1, 2);
AudioConnection          patchCord4(sound3, 0, mix1, 3);
AudioConnection          patchCord5(sound4, 0, mix2, 1);
AudioConnection          patchCord6(mix1, 0, mix2, 0);
AudioConnection          patchCord7(waveform1, 0, filter1, 0);
AudioConnection          patchCord8(mix2, 0, mix3, 1);
AudioConnection          patchCord9(filter1, 0, envelope1, 0);
AudioConnection          patchCord10(envelope1, 0, mix3, 0);
AudioConnection          patchCord11(mix3, 0, i2s2, 0);
AudioConnection          patchCord12(mix3, 0, i2s2, 1);
AudioControlSGTL5000     audioShield;    //xy=1397.515625,514.9999974370003
// GUItool: end automatically generated code

// GUItool: end automatically generated code

// GUItool: end automatically generated code

// MIDI SCALES 
int dorian[8] = {0, 2, 3, 5, 7, 9, 10, 12};  // dorian 
int majorPentatonic[8] = {0, 2, 4, 7, 9, 12, 14, 16};  // major pentatonic
int minorPentatonic[8] = {0, 3, 5, 7, 10, 12, 15, 17}; // minor pentatonic 
int octaves[5] = {0, 12, 24, 36, 48}; // octaves

float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void setup() {
  AudioMemory(50);
      // turn on the output
  audioShield.enable();
  audioShield.volume(0.5);
  mix1.gain(0,0.25); // Drum ch. 1
  mix1.gain(1,0.25); // Drum ch. 2
  mix1.gain(2,0.25); // Drum ch. 3
  mix1.gain(3,0.25); // Drum ch. 4
  mix2.gain(0,0.5);  //  Drum mixer 1 daisy chain ==> drum mixer 2
  mix2.gain(1,0.5);  // Drum ch. 5

  mix3.gain(0,0.3); // Master mixer
  mix3.gain(1,0.3); // Master mixer 
  mix3.gain(2,0.3); // Master mixer 

	Wire.begin();
	Wire.setClock(400000);
	pca9685_config(0x40);
	mcp23017_config(0x20, 0xFFFF);

  int sensorSum1 = 0;       // Ross touch sensor 
  for (int x = 0; x < 50; x++){
  sensorSum1 = sensorSum1 + touchRead(0);
  }
  sensorMinimum1 = sensorSum1 / 50; 

  waveform1.begin(0.5, 60, WAVEFORM_SQUARE); // Ross  
  
  envelope1.attack(5.0); // Ross 
  envelope1.decay(100.0);
  envelope1.sustain(1.0); 
}

void led(unsigned int lednum, unsigned int value)
{
	if (lednum > 15) return;

	Wire.beginTransmission((uint8_t)(0x40 + (lednum >> 4)));
	Wire.write(6 + ((lednum & 15) << 2));
	if (value == 0) {
		Wire.write(0);
		Wire.write(0);
		Wire.write(0);
		Wire.write(0x10);
	} else if (value < 4096) {
		Wire.write(0);
		Wire.write(0);
		Wire.write(value);
		Wire.write(value >> 8);
	} else {
		Wire.write(0);
		Wire.write(0x10);
		Wire.write(0);
		Wire.write(0);
	}
	Wire.endTransmission();
	//int r = Wire.endTransmission();
	//Serial.println(r);
}

void pca9685_config(uint8_t addr)
{
	Wire.beginTransmission(addr);
	Wire.write(0);
	Wire.write(0x20);
	Wire.write(0x04);
	Wire.endTransmission();
}

void mcp23017_config(uint8_t addr, uint16_t dir)
{
	Wire.beginTransmission(addr);
	Wire.write(0x00);
	Wire.write(dir & 255);
	Wire.write(dir >> 8);
	Wire.endTransmission();
}

uint16_t button_state[1];
uint16_t button_high2low[1];

void buttons_update(void)
{
	Wire.beginTransmission(0x20);
	Wire.write(0x12);
	Wire.endTransmission(false);
	Wire.requestFrom(0x20, 2);
	if (Wire.available() >= 2) {
		uint16_t state;
		state = Wire.read();
		state |= Wire.read() << 8;
		//Serial.println(state);
		button_high2low[0] = button_state[0] & ~state;
		button_state[0] = state;
		if (button_high2low[0]) {
			Serial.println(button_high2low[0]);
		}
	} else {
		button_high2low[0] = 0;
	}
}

void loop() {
	do_left_panel();
	do_center_panel();
	do_right_panel();
	led_test();
	buttons_update();
}


void led_test(void)
{
	static int i=0;

	led(0, (i + 819 * 0) & 4095);
	led(1, (i + 819 * 1) & 4095);
	led(2, (i + 819 * 2) & 4095);
	led(3, (i + 819 * 3) & 4095);
	led(4, (i + 819 * 4) & 4095);
	i++;
}

void do_left_panel(void) // Ross's panel 
{
  //float touchSensor2 = (touchRead(1));
  //float touchSensor3 = (touchRead(30));  
  //float touchSensor4 = (touchRead(29));  
  //float touchSensor5 = (touchRead(16));

  //pot1Raw = (analogRead(33));
  //pot2Raw = (analogRead(31));
  //pot3Raw = (analogRead(32));  

  float touchSensor1 = (touchRead(0));

  float sensorDifference1 = (touchSensor1 - sensorMinimum1);
  if (sensorDifference1 > 0){ 
  sensorSmoothness1 = 3000; // "Attack time"
  }
  else {
  sensorSmoothness1 = 5; // "Release time" 
  }
  sensorMinimum1 = sensorMinimum1 + (sensorDifference1 / sensorSmoothness1);

  float cleanSensorOutput1 = touchSensor1 - sensorMinimum1;

  cleanSensorOutput1 = max(cleanSensorOutput1, 0); // truncate lowest possible value to 0 
  cleanSensorOutput1 = min(cleanSensorOutput1, 1200); // truncate highest possible value to 1200 

  gate1[1] = gate1[0];

  gate1[0] = cleanSensorOutput1 >= 500;

  if (gate1[0]>gate1[1]){
  envelope1.noteOn();
  }
  if (gate1[1]>gate1[0]){
  envelope1.noteOff();
  }

  filterCutoff1 = mapfloat(cleanSensorOutput1, 0, 1200, 0, 5000);

  filter1.frequency(filterCutoff1);

  Serial.print(touchSensor1);
  Serial.print(",<==rawData,");
  Serial.print(sensorMinimum1);
  Serial.print("<==averageMinimum,");
  Serial.print(cleanSensorOutput1);
  Serial.print("<==scaledOutput");
  Serial.print(filterCutoff1);
  Serial.print("<==filterCutoff1");
  /*
  Serial.print(touchSensor2);
  Serial.print(",");
  Serial.print(touchSensor3);
  Serial.print(",");
  Serial.print(touchSensor4);
  Serial.print(",");
  Serial.print(touchSensor5);
  Serial.print(",");
  Serial.print(pot1Raw);
  Serial.print(",");
  Serial.print(pot2Raw);
  Serial.print(",");
  Serial.print(pot3Raw);
  Serial.print(",");
  */
  Serial.println();
}

void do_center_panel(void)
{
	if(sinceTempo>=(15000/tempo))
	{
		leftTrigger();
		rightTrigger();
		stepCount++;
		sinceTempo=0;
	}
	// button step sequencer stuff goes here
}


void do_right_panel(void)   // touch panel synth stuff goes here
{
  
 TsPot1Val = analogRead(TsPot1);
 TsPot2Val = analogRead(TsPot2);
 TsPot3Val = analogRead(TsPot3);
 TSPoint p = ts.getPoint();    // a point object holds x y and z coordinates

  if (p.z > ts.pressureThreshhold) {  //we have some minimum pressure we consider 'valid' .... pressure of 0 means no pressing!
     Serial.print("X = "); Serial.print(p.x);
     Serial.print("\tY = "); Serial.print(p.y);
     Serial.print("\tPressure = "); Serial.println(p.z);
  }
//add if statement to only print if val change...
  Serial.print("Pot1Val = ");  Serial.print(TsPot1Val);
  Serial.print("Pot2Val = ");  Serial.print(TsPot2Val);
  Serial.print("Pot3Val = ");  Serial.println(TsPot3Val);

//  delay(100);  
}

void leftTrigger()
{
	
}

void rightTrigger()
{
	
}

float mtof(int note){      // Outputs a float freq based on incoming MIDI note. How to use: mtof(noteValue)  
   return (440.0f * exp2f((float)(note - 69) * 0.0833333f));
  }






