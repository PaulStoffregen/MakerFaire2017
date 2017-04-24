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

elapsedMicros sinceTest1;
int timeTaken = 0; 

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

// GUItool: begin automatically generated code
AudioSynthNoiseWhite     noise1;         //xy=390.5158805847168,223.5156707763672
AudioSynthWaveform       waveform1;      //xy=399.5159111022949,114.51568222045898
AudioSynthWaveform       waveform2;      //xy=400.5158805847168,170.51567554473877
AudioSynthWaveform       waveform3;      //xy=447.51570892333984,687.515796661377
AudioSynthWaveform       waveform4;      //xy=448.51573181152344,744.5157670974731
AudioSynthNoiseWhite     noise2;         //xy=455.51575469970703,791.5158290863037
AudioMixer4              mixer1;         //xy=560.5159034729004,172.51566314697266
AudioPlayMemory          sound1;         //xy=580.5156784057617,365.0000476837158
AudioPlayMemory          sound0;         //xy=581.5156841278076,315.0000305175781
AudioPlayMemory          sound2;         //xy=584.5157089233398,411.00012588500977
AudioPlayMemory          sound3;         //xy=587.5156936645508,461.00006675720215
AudioEffectEnvelope      envelope2;      //xy=600.5160064697266,242.5156955718994
AudioMixer4              mixer3;         //xy=624.5157318115234,739.5157985687256
AudioEffectEnvelope      envelope3;      //xy=630.515625,811.5157012939453
AudioEffectEnvelope      envelope1;      //xy=755.5159797668457,121.51566123962402
AudioFilterStateVariable filter1;        //xy=759.516040802002,178.51570892333984
AudioPlayMemory          sound4;         //xy=768.5157165527344,586.0002059936523
AudioMixer4              mix1;           //xy=774.515682220459,517.0000820159912
AudioEffectEnvelope      envelope4;      //xy=796.5156478881836,687.5157203674316
AudioFilterStateVariable filter2;        //xy=806.5158271789551,744.5159206390381
AudioEffectMultiply      multiply1;      //xy=903.5158920288086,158.5156888961792
AudioMixer4              mix2;           //xy=921.5157165527344,535.0001049041748
AudioEffectMultiply      multiply2;      //xy=951.5157127380371,723.5157222747803
AudioMixer4              mixer2;         //xy=1258.5158081054688,560.5156707763672
AudioOutputI2S           i2s2;           //xy=1402.5157508850098,566.5156631469727
AudioConnection          patchCord1(noise1, 0, mixer1, 2);
AudioConnection          patchCord2(waveform1, 0, mixer1, 0);
AudioConnection          patchCord3(waveform2, 0, mixer1, 1);
AudioConnection          patchCord4(waveform3, 0, mixer3, 0);
AudioConnection          patchCord5(waveform4, 0, mixer3, 1);
AudioConnection          patchCord6(noise2, 0, mixer3, 2);
AudioConnection          patchCord7(mixer1, 0, filter1, 0);
AudioConnection          patchCord8(sound1, 0, mix1, 1);
AudioConnection          patchCord9(sound0, 0, mix1, 0);
AudioConnection          patchCord10(sound2, 0, mix1, 2);
AudioConnection          patchCord11(sound3, 0, mix1, 3);
AudioConnection          patchCord12(envelope2, 0, filter1, 1);
AudioConnection          patchCord13(mixer3, 0, filter2, 0);
AudioConnection          patchCord14(envelope3, 0, filter2, 1);
AudioConnection          patchCord15(envelope1, 0, multiply1, 0);
AudioConnection          patchCord16(filter1, 0, multiply1, 1);
AudioConnection          patchCord17(sound4, 0, mix2, 1);
AudioConnection          patchCord18(mix1, 0, mix2, 0);
AudioConnection          patchCord19(envelope4, 0, multiply2, 0);
AudioConnection          patchCord20(filter2, 0, multiply2, 1);
AudioConnection          patchCord21(multiply1, 0, mixer2, 0);
AudioConnection          patchCord22(mix2, 0, mixer2, 1);
AudioConnection          patchCord23(multiply2, 0, mixer2, 2);
AudioConnection          patchCord24(mixer2, 0, i2s2, 0);
AudioConnection          patchCord25(mixer2, 0, i2s2, 1);
AudioControlSGTL5000     audioShield;     //xy=1393.5160293579102,486.51576042175293
// GUItool: end automatically generated code

// MIDI SCALES 
int dorian[8] = {0, 2, 3, 5, 7, 9, 10, 12};  // dorian 
int majorPentatonic[8] = {0, 2, 4, 7, 9, 12, 14, 16};  // major pentatonic
int minorPentatonic[8] = {0, 3, 5, 7, 10, 12, 15, 17}; // minor pentatonic 
int octaves[5] = {0, 12, 24, 36, 48}; // octaves

void setup() {
  AudioMemory(50);
      // turn on the output
  audioShield.enable();
  audioShield.volume(0.5);
  mixer1.gain(0,0.3);
  mixer1.gain(1,0.3);
  mixer1.gain(2,0.3);
  mixer2.gain(0,0.3);
  mixer2.gain(1,0.3);
  mixer2.gain(2,0.3);
  mixer3.gain(0,0.3);
  mixer3.gain(1,0.3);
  mixer3.gain(2,0.3);
  mix1.gain(0,0.25);
  mix1.gain(1,0.25);
  mix1.gain(2,0.25);
  mix1.gain(3,0.25);
  mix2.gain(0,0.5);
  mix2.gain(1,0.5);

	Wire.begin();
	Wire.setClock(400000);
	pca9685_config(0x40);
	mcp23017_config(0x20, 0xFFFF);

  int sum = 0; 
  for (int x = 0; x < 50; x++){
  sum = sum + touchRead(0);
  }
  minimum = sum / 50; 
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

void do_left_panel(void)
{
  // sinceTest1 = 0; 
  
  float touchSensor1 = (touchRead(0));
  //touchSensor2 = (touchRead(1));
  //touchSensor3 = (touchRead(30));  
  //touchSensor4 = (touchRead(29));  
  //touchSensor5 = (touchRead(16));

  //pot1Raw = (analogRead(33));
  //pot2Raw = (analogRead(31));
  //pot3Raw = (analogRead(32));  

  // timeTaken = sinceTest1;

  float difference = (touchSensor1 - minimum);
  if (difference > 0){ 
  smoothness = 3000; // "Attack time"
  }
  else {
  smoothness = 5; // "Release time" 
  }
  minimum = minimum + (difference / smoothness);

  float scaledOutput = touchSensor1 - minimum;

  scaledOutput = max(scaledOutput, 0); 

  if (scaledOutput > 1000){
  //envelope1.noteOn();
  }
  else{
  //envelope1.noteOff(); 
  }
  
  //Serial.print(timeTaken);
  //Serial.print(",");
  //Serial.print("<==elapsedMicros,"); 
  Serial.print(touchSensor1);
  Serial.print(",<==rawData,");
  Serial.print(minimum);
  Serial.print("<==averageMinimum,");
  Serial.print(scaledOutput);
  Serial.print("<==scaledOutput");
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






