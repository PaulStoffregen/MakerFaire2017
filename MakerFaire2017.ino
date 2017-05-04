#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <stdint.h>  //touchscreeen
#include "TouchScreen.h"
#include <Bounce.h>
#include "AudioSampleDt_kick.h"
#include "AudioSampleDt_cowbell.h"
#include "AudioSampleDt_snare.h"
#include "AudioSampleDt_tamborine.h"
#include "AudioSampleDt_closedhat.h"
#include "AudioSampleVer04wavfcus.h"
#include "AudioSampleShaker.h"
#include "AudioSampleDt_clap.h"
#include "AudioSampleCastinet.h"
#include "AudioSampleDt_rimshot.h"
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   lfoMod1;        //xy=129.39453125,188.14453125
AudioSynthWaveformSine   lfoMod2;        //xy=134.39453125,326.14453125
AudioSynthWaveformSine   lfoMod3;        //xy=138.39453125,487.14453125
AudioSynthWaveformSine   lfoMod4;        //xy=146.39453125,648.14453125
AudioSynthWaveformSine   lfoMod5;        //xy=148.39453125,805.14453125
AudioSynthWaveformSineModulated sine_fm1;       //xy=264.39453125,182.14453125
AudioSynthWaveformSineModulated sine_fm2;       //xy=265.39453125,329.14453125
AudioSynthWaveformSineModulated sine_fm4;       //xy=265.39453125,646.14453125
AudioSynthWaveformSineModulated sine_fm3;       //xy=271.39453125,486.14453125
AudioSynthWaveformSineModulated sine_fm5;       //xy=272.39453125,806.14453125
AudioSynthWaveformPWM    waveform1;      //xy=405.39453125,181.14453125
AudioSynthWaveformPWM    waveform4;      //xy=405.39453125,645.14453125
AudioSynthWaveformPWM    waveform2;      //xy=407.39453125,326.14453125
AudioSynthWaveformPWM    waveform3;      //xy=411.39453125,482.14453125
AudioSynthWaveformPWM    waveform5;      //xy=411.39453125,808.14453125
AudioSynthWaveform       waveform6;      //xy=510.64453125,944.5
AudioSynthWaveform       waveform8;      //xy=512.64453125,987.5
AudioSynthWaveform       waveform7;      //xy=512.64453125,1030.5
AudioFilterStateVariable filter2;        //xy=546.39453125,332.14453125
AudioFilterStateVariable filter1;        //xy=549.39453125,189.14453125
AudioFilterStateVariable filter3;        //xy=551.39453125,487.14453125
AudioFilterStateVariable filter4;        //xy=556.39453125,650.14453125
AudioFilterStateVariable filter5;        //xy=560.39453125,812.14453125
AudioSynthWaveform       waveform9;      //xy=576.64453125,1238.5
AudioSynthWaveform       waveform10;     //xy=579.64453125,1201.5
AudioSynthWaveform       waveform11;     //xy=590.64453125,1111.5
AudioSynthWaveform       waveform12;     //xy=591.64453125,1147.5
AudioMixer4              mixer4;         //xy=660.64453125,976.5
AudioEffectEnvelope      envelope2;      //xy=681.39453125,319.14453125
AudioEffectEnvelope      envelope1;      //xy=684.39453125,176.14453125
AudioEffectEnvelope      envelope3;      //xy=686.39453125,474.14453125
AudioEffectEnvelope      envelope4;      //xy=691.39453125,637.14453125
AudioEffectEnvelope      envelope5;      //xy=695.39453125,799.14453125
AudioMixer4              mixer7;         //xy=749.64453125,1223.5
AudioMixer4              mixer3;         //xy=758.64453125,1149.5
AudioSynthWaveform       waveform14;     //xy=771.64453125,1306.5
AudioEffectEnvelope      envelope6;      //xy=796.64453125,1023.5
AudioMixer4              mixer1;         //xy=890.39453125,410.14453125
AudioFilterStateVariable filter6;        //xy=909.64453125,1159.5
AudioFilterStateVariable filter7;        //xy=913.64453125,1234.5
AudioSynthKarplusStrong  string2;        //xy=927.64453125,941.5
AudioSynthKarplusStrong  string1;        //xy=930.64453125,905.5
AudioSynthWaveformPWM    pwm1;           //xy=964.64453125,1027.5
AudioSynthWaveform       waveform13;     //xy=993.64453125,1095.5
AudioSynthWaveformSine   sine2; //xy=1028.39453125,361.14453125
AudioMixer4              mixer2;         //xy=1039.39453125,430.14453125
AudioEffectEnvelope      envelope7;      //xy=1074.64453125,1185.5
AudioEffectEnvelope      envelope8;      //xy=1074.64453125,1233.5
AudioMixer4              mixer6;         //xy=1094.64453125,942.5
AudioFilterStateVariable filter8;        //xy=1115.64453125,1038.5
AudioPlayMemory          sound1;         //xy=1120.64453125,738.5
AudioPlayMemory          sound0;         //xy=1121.64453125,688.5
AudioPlayMemory          sound2;         //xy=1124.64453125,784.5
AudioPlayMemory          sound3;         //xy=1127.64453125,834.5
AudioFilterStateVariable filter9; //xy=1202.39453125,396.14453125
AudioFilterStateVariable filter10; //xy=1205.39453125,476.14453125
AudioEffectBitcrusher    bitcrusher1;    //xy=1234.64453125,950.5
AudioMixer4              mixer12;        //xy=1261.64453125,1046.5
AudioMixer4              mixer11;        //xy=1264.64453125,1210.5
AudioPlayMemory          sound4;         //xy=1296.64453125,828.5
AudioMixer4              mix1;           //xy=1302.64453125,759.5
AudioMixer4              mixer5; //xy=1379.1446075439453,438.1445770263672
AudioMixer4              mixer9;         //xy=1382.64453125,982.5
AudioMixer4              mix2;           //xy=1449.64453125,777.5
AudioSynthWaveformSine   sine1;          //xy=1453.64453125,854.5
AudioMixer4              mixer13;        //xy=1489.64453125,1089.5
AudioMixer4              mix3;           //xy=1644.64453125,783.5
AudioOutputI2S           i2s2;           //xy=1788.64453125,789.5
AudioConnection          patchCord1(lfoMod1, sine_fm1);
AudioConnection          patchCord2(lfoMod2, sine_fm2);
AudioConnection          patchCord3(lfoMod3, sine_fm3);
AudioConnection          patchCord4(lfoMod4, sine_fm4);
AudioConnection          patchCord5(lfoMod5, sine_fm5);
AudioConnection          patchCord6(sine_fm1, waveform1);
AudioConnection          patchCord7(sine_fm2, waveform2);
AudioConnection          patchCord8(sine_fm4, waveform4);
AudioConnection          patchCord9(sine_fm3, waveform3);
AudioConnection          patchCord10(sine_fm5, waveform5);
AudioConnection          patchCord11(waveform1, 0, filter1, 0);
AudioConnection          patchCord12(waveform4, 0, filter4, 0);
AudioConnection          patchCord13(waveform2, 0, filter2, 0);
AudioConnection          patchCord14(waveform3, 0, filter3, 0);
AudioConnection          patchCord15(waveform5, 0, filter5, 0);
AudioConnection          patchCord16(waveform6, 0, mixer4, 0);
AudioConnection          patchCord17(waveform8, 0, mixer4, 1);
AudioConnection          patchCord18(waveform7, 0, mixer4, 2);
AudioConnection          patchCord19(filter2, 0, envelope2, 0);
AudioConnection          patchCord20(filter1, 0, envelope1, 0);
AudioConnection          patchCord21(filter3, 0, envelope3, 0);
AudioConnection          patchCord22(filter4, 0, envelope4, 0);
AudioConnection          patchCord23(filter5, 0, envelope5, 0);
AudioConnection          patchCord24(waveform9, 0, mixer7, 2);
AudioConnection          patchCord25(waveform10, 0, mixer7, 1);
AudioConnection          patchCord26(waveform11, 0, mixer3, 1);
AudioConnection          patchCord27(waveform12, 0, mixer3, 2);
AudioConnection          patchCord28(mixer4, envelope6);
AudioConnection          patchCord29(envelope2, 0, mixer1, 1);
AudioConnection          patchCord30(envelope1, 0, mixer1, 0);
AudioConnection          patchCord31(envelope3, 0, mixer1, 2);
AudioConnection          patchCord32(envelope4, 0, mixer1, 3);
AudioConnection          patchCord33(envelope5, 0, mixer2, 1);
AudioConnection          patchCord34(mixer7, 0, filter7, 0);
AudioConnection          patchCord35(mixer3, 0, filter6, 0);
AudioConnection          patchCord36(waveform14, 0, filter6, 1);
AudioConnection          patchCord37(waveform14, 0, filter7, 1);
AudioConnection          patchCord38(envelope6, pwm1);
AudioConnection          patchCord39(mixer1, 0, mixer2, 0);
AudioConnection          patchCord40(filter6, 0, envelope7, 0);
AudioConnection          patchCord41(filter7, 0, envelope8, 0);
AudioConnection          patchCord42(string2, 0, mixer6, 1);
AudioConnection          patchCord43(string1, 0, mixer6, 0);
AudioConnection          patchCord44(pwm1, 0, filter8, 0);
AudioConnection          patchCord45(waveform13, 0, filter8, 1);
AudioConnection          patchCord46(sine2, 0, filter9, 1);
AudioConnection          patchCord47(sine2, 0, filter10, 1);
AudioConnection          patchCord48(mixer2, 0, filter9, 0);
AudioConnection          patchCord49(mixer2, 0, filter10, 0);
AudioConnection          patchCord50(envelope7, 0, mixer11, 1);
AudioConnection          patchCord51(envelope8, 0, mixer11, 2);
AudioConnection          patchCord52(mixer6, bitcrusher1);
AudioConnection          patchCord53(filter8, 0, mixer12, 0);
AudioConnection          patchCord54(filter8, 1, mixer12, 1);
AudioConnection          patchCord55(filter8, 2, mixer12, 2);
AudioConnection          patchCord56(sound1, 0, mix1, 1);
AudioConnection          patchCord57(sound0, 0, mix1, 0);
AudioConnection          patchCord58(sound2, 0, mix1, 2);
AudioConnection          patchCord59(sound3, 0, mix1, 3);
AudioConnection          patchCord60(filter9, 0, mixer5, 0);
AudioConnection          patchCord61(filter10, 2, mixer5, 3);
AudioConnection          patchCord62(bitcrusher1, 0, mixer9, 2);
AudioConnection          patchCord63(mixer12, 0, mixer13, 1);
AudioConnection          patchCord64(mixer11, 0, mixer13, 2);
AudioConnection          patchCord65(sound4, 0, mix2, 1);
AudioConnection          patchCord66(mix1, 0, mix2, 0);
AudioConnection          patchCord67(mixer5, 0, mix3, 0);
AudioConnection          patchCord68(mixer9, 0, mixer13, 0);
AudioConnection          patchCord69(mix2, 0, mix3, 1);
AudioConnection          patchCord70(sine1, 0, mix3, 3);
AudioConnection          patchCord71(mixer13, 0, mix3, 2);
AudioConnection          patchCord72(mix3, 0, i2s2, 0);
AudioConnection          patchCord73(mix3, 0, i2s2, 1);
AudioControlSGTL5000     audioShield;    //xy=1836.64453125,679.5
// GUItool: end automatically generated code

// Darcys Touchscreen Pins and Buttons
#define YP A6  // must be an analog pin, use "An" notation!
#define XM A7  // was A7must be an analog pin, use "An" notation!
#define YM 8   // can be a digital pin
#define XP 10   // can be a digital pin
#define TsPot1 A18 //
#define TsPot2 A19 //
#define selectionPin A20 //
//A16 tempo pot  using A17 for DRC test sketch
Bounce buttonA = Bounce(1, 8); // pin,debouncetime
Bounce buttonB = Bounce(2, 8);
Bounce buttonC = Bounce(3, 8);
Bounce buttonD = Bounce(4, 8);
Bounce buttonE = Bounce(5, 8);
//use pinMode(10, INPUT_PULLUP); for buttons //if(buttonA.fallingEdge()) { }
int Pot1 = 0;
int Pot2 = 0;
int selectionValue = 0;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 370);  //use a multimeter to read the resistance between X+ and X- and replace value which is currently 300.
//Boolean trigger for darcy to use BPM to trigger notes
bool noteTrig = false;
bool gateTrig = false;
bool toggle = false;
//End of Darcys Touchscreen
int buttonSelection = 4;


// Global Clock
int rightTiming = 4;
int leftTiming = 1;
elapsedMillis sinceTempo;
elapsedMillis sinceThreshold;
elapsedMillis sinceTouch;
elapsedMillis sinceShift;
int clockDuration;
int timingValues[7] = {1, 2, 4, 8, 16, 32, 64};
int drumDivider = 8;

//Ben variables
float tempo = 80;
int stepCount;
byte row[5];
boolean selectedSample[5];
int rowOn[5];
int lastOn;
int totalOn;
int offThreshold = 8;
byte drumTable[5] = {0b01001111, 0b10010000, 0b11100110, 0b11010101, 0b11111111};
boolean GPIOOnline = 1;

// Ross' Capsense Panel and Midi quantizing
elapsedMillis transposeClock;
elapsedMillis buttonDebounce1;
elapsedMillis buttonDebounce2;

int touchSensor1 = 0;
int touchSensor2 = 0;
int touchSensor3 = 0;
int touchSensor4 = 0;
int touchSensor5 = 0;

boolean gate1[2];
boolean gate2[2];
boolean gate3[2];
boolean gate4[2];
boolean gate5[2];

int divide = 0;

float sensorMinimum1 = 0;
float sensorMinimum2 = 0;
float sensorMinimum3 = 0;
float sensorMinimum4 = 0;
float sensorMinimum5 = 0;

float sensorSmoothness1 = 0;
float sensorSmoothness2 = 0;
float sensorSmoothness3 = 0;
float sensorSmoothness4 = 0;
float sensorSmoothness5 = 0;

float currentFilterCutoff1 = 0;
float currentFilterCutoff2 = 0;
float currentFilterCutoff3 = 0;
float currentFilterCutoff4 = 0;
float currentFilterCutoff5 = 0;

float smoothedFilterCutoff1 = 0;
float smoothedFilterCutoff2 = 0;
float smoothedFilterCutoff3 = 0;
float smoothedFilterCutoff4 = 0;
float smoothedFilterCutoff5 = 0;

float cutoffSmoothness1 = 0;
float cutoffSmoothness2 = 0;
float cutoffSmoothness3 = 0;
float cutoffSmoothness4 = 0;
float cutoffSmoothness5 = 0;

float filterCutoffSlew1 = 0; // slew amount on filter cutoff
float filterCutoffSlew2 = 0; // slew amount on filter cutoff
float filterCutoffSlew3 = 0; // slew amount on filter cutoff
float filterCutoffSlew4 = 0; // slew amount on filter cutoff
float filterCutoffSlew5 = 0; // slew amount on filter cutoff

float filterSum1 = 0;
float filterSum2 = 0;
float filterSum3 = 0;
float filterSum4 = 0;
float filterSum5 = 0;

float filterOffset = 0;

float pw = 0;

int chordSelect = 0;
int chord[5] = {0, 0, 0, 0, 0};
int scale[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int noteSelect = 0;

int baseOctave = 0;
int transpose = 0;

boolean button1[2];
boolean button2[2];
int buttonCount = 0;
int debounceTime = 0;

int octaveMod = 0;
// END OF ROSS'S STUFF

// Two useful functions
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float mtof(int note) {     // Outputs a float freq based on incoming MIDI note. How to use: mtof(noteValue)
  return (440.0f * exp2f((float)(note - 69) * 0.0833333f));
}

void setup() {
  analogReadResolution(10);
  // Global audio stuff
  AudioMemory(50);
  audioShield.enable();
  audioShield.volume(0.5);

  // Test Oscillator
  sine1.amplitude(0.5);
  //sine1.frequency(440);

  // Wire
  Wire.begin();
  Wire.setClock(400000);
  pca9685_config(0x40);
  pca9685_config(0x41);
  pca9685_config(0x42);
  mcp23017_config(0x20, 0xFFFF);
  mcp23017_config(0x21, 0xFFFF);
  mcp23017_config(0x22, 0xFFFF);

  // Drums mixer
  mix1.gain(0, 1); // Drum ch. 1
  mix1.gain(1, 1); // Drum ch. 2
  mix1.gain(2, 1); // Drum ch. 3
  mix1.gain(3, 1); // Drum ch. 4
  mix2.gain(0, 1); // Drum mixer 1 daisy chain ==> drum mixer 2
  mix2.gain(1, 1); // Drum ch. 5

  // Master Mixer
  mix3.gain(0, 0.25); // Ross
  mix3.gain(1, 1); // Ben
  mix3.gain(2, 1); // Darcy
  mix3.gain(3, 1); // Test Oscillator  //connected to DRC test scales

  // ROSS SETUP
  int sensorSum1 = 0;
  for (int x = 0; x < 50; x++) {
    sensorSum1 = sensorSum1 + touchRead(0);
  }

  int sensorSum2 = 0;
  for (int x = 0; x < 50; x++) {
    sensorSum2 = sensorSum2 + touchRead(1);
  }

  int sensorSum3 = 0;
  for (int x = 0; x < 50; x++) {
    sensorSum3 = sensorSum3 + touchRead(30);
  }

  int sensorSum4 = 0;
  for (int x = 0; x < 50; x++) {
    sensorSum4 = sensorSum4 + touchRead(29);
  }

  int sensorSum5 = 0;
  for (int x = 0; x < 50; x++) {
    sensorSum5 = sensorSum5 + touchRead(16);
  }

  mixer1.gain(0, 0.25);
  mixer1.gain(1, 0.25);
  mixer1.gain(2, 0.25);
  mixer1.gain(3, 0.25);
  mixer2.gain(0, 0.5);
  mixer2.gain(1, 0.2);

  sensorMinimum1 = sensorSum1 / 50;
  sensorMinimum2 = sensorSum2 / 50;
  sensorMinimum3 = sensorSum3 / 50;
  sensorMinimum4 = sensorSum4 / 50;
  sensorMinimum5 = sensorSum5 / 50;

  // Initialize Oscillators
  waveform1.amplitude(0.8);
  waveform2.amplitude(0.8);
  waveform3.amplitude(0.8);
  waveform4.amplitude(0.8);
  waveform5.amplitude(0.8);


  // Modulation LFO for PWM
  sine_fm1.frequency(0.05);
  sine_fm2.frequency(0.1);
  sine_fm3.frequency(0.5);
  sine_fm4.frequency(0.6);
  sine_fm5.frequency(0.7);
  sine_fm1.amplitude(0.7);
  sine_fm2.amplitude(0.7);
  sine_fm3.amplitude(0.7);
  sine_fm4.amplitude(0.7);
  sine_fm5.amplitude(0.7);

  // PWM LFO
  lfoMod1.frequency(0.01);
  lfoMod2.frequency(0.05);
  lfoMod3.frequency(0.1);
  lfoMod4.frequency(0.2);
  lfoMod5.frequency(0.3);
  lfoMod1.amplitude(1.0);
  lfoMod2.amplitude(1.0);
  lfoMod3.amplitude(1.0);
  lfoMod4.amplitude(1.0);
  lfoMod5.amplitude(1.0);
  filter1.resonance(5.0);
  filter2.resonance(5.0);
  filter3.resonance(5.0);
  filter4.resonance(5.0);
  filter5.resonance(5.0);

  envelope1.attack(0.0);
  envelope1.sustain(0.0);
  envelope1.release(0.0);

  envelope2.attack(0.0);
  envelope2.sustain(0.0);
  envelope2.release(0.0);

  envelope3.attack(0.0);
  envelope3.sustain(0.0);
  envelope3.release(0.0);

  envelope4.attack(0.0);
  envelope4.sustain(0.0);
  envelope4.release(0.0);

  envelope5.attack(0.0);
  envelope5.sustain(0.0);
  envelope5.release(0.0);

  chordSelect = 1;
  transpose = 0;

  pinMode(2, INPUT);
  pinMode(3, INPUT);

  //Darcys Touchscreen Stuff
  //mixer2.gain(0, 1);
  mixer3.gain(1, 1);
  mixer3.gain(2, 1);

  mixer4.gain(0, 1);
  mixer4.gain(1, 1);
  mixer4.gain(2, 1);

  mixer6.gain(0, 1);
  mixer6.gain(1, 1);

  mixer7.gain(1, 1);
  mixer7.gain(2, 1);

  mixer13.gain(0, 1);
  mixer13.gain(1, 1);
  mixer13.gain(2, 1);

  //mixer9.gain(0, 1);
  //mixer11.gain(0, 1);
  //mixer12.gain(0, 1);

    // Master notch filter

  sine2.amplitude(1.0);
  sine2.frequency(0.1);
  mixer5.gain(0, 0.5);
  mixer5.gain(1, 0.5);
}


void rightTrigger() {
  //noteTrig= true;     // Ben's sequencer calls this
  gateTrig = true;
  //toggle = !toggle;  ///DRC
  //Serial.println(toggle);
}



void led(unsigned int lednum, unsigned int value)
{
  if (GPIOOnline == 0) return;

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
  int r = Wire.endTransmission();
  if (r != 0)
  {
    GPIOOnline = 0;
  }
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
uint16_t button_state2[1];
uint16_t button_high2low2[1];
uint16_t button_state3[1];
uint16_t button_high2low3[1];

void buttons_update(void)
{
  int r;
  Wire.beginTransmission(0x20);
  Wire.write(0x12);
  r = Wire.endTransmission(false);
  if (r != 0)
  {
    GPIOOnline = 0;
    return;
  }
  Wire.requestFrom(0x20, 2);
  if (Wire.available() >= 2) {
    uint16_t state;
    state = Wire.read();
    state |= Wire.read() << 8;
    //Serial.println(state);
    button_high2low[0] = button_state[0] & ~state;
    button_state[0] = state;
    if (button_high2low[0]) {
      for (int b = 0; b < 8; b++)
      {
        if (bitRead(button_high2low[0], b))
        {
          bitWrite(row[0], b, !(bitRead(row[0], b)));
          sinceTouch = 0;
        }
        if (bitRead(button_high2low[0], b + 8))
        {
          bitWrite(row[1], b, !(bitRead(row[1], b)));
          sinceTouch = 0;
        }
      }
    }
  } else {
    button_high2low[0] = 0;
  }
  Wire.beginTransmission(0x21);
  Wire.write(0x12);
  r = Wire.endTransmission(false);
  if (r != 0)
  {
    GPIOOnline = 0;
    return;
  }
  Wire.requestFrom(0x21, 2);
  if (Wire.available() >= 2) {
    uint16_t state2;
    state2 = Wire.read();
    state2 |= Wire.read() << 8;
    //Serial.println(state);
    button_high2low2[0] = button_state2[0] & ~state2;
    button_state2[0] = state2;
    if (button_high2low2[0]) {
      for (int b = 0; b < 8; b++)
      {
        if (bitRead(button_high2low2[0], b))
        {
          bitWrite(row[2], b, !(bitRead(row[2], b)));
          sinceTouch = 0;
        }
        if (bitRead(button_high2low2[0], b + 8))
        {
          bitWrite(row[3], b, !(bitRead(row[3], b)));
          sinceTouch = 0;
        }
      }
    }
  } else {
    button_high2low2[0] = 0;
  }
  Wire.beginTransmission(0x22);
  Wire.write(0x12);
  r = Wire.endTransmission(false);
  if (r != 0)
  {
    GPIOOnline = 0;
    return;
  }
  Wire.requestFrom(0x22, 2);
  if (Wire.available() >= 2) {
    uint16_t state3;
    state3 = Wire.read();
    state3 |= Wire.read() << 8;
    //Serial.println(state);
    button_high2low3[0] = button_state3[0] & ~state3;
    button_state3[0] = state3;
    if (button_high2low3[0]) {
      for (int b = 0; b < 8; b++)
      {
        if (bitRead(button_high2low3[0], b))
        {
          bitWrite(row[4], b, !(bitRead(row[4], b)));
          sinceTouch = 0;
        }
        if (bitRead(button_high2low3[0], b + 8))
        {
          if (b < 5)
            buttonSelection = b;
          if (b == 5 || b == 6) //octave control
          {
            if (b == 5)
              buttonCount--;
            if (b == 6)
              buttonCount++;
            if (buttonCount > 2)
              buttonCount = 2;
            if (buttonCount < (-2))
              buttonCount = -2;
          }
        }
      }
    }
  } else {
    button_high2low3[0] = 0;
  }
}

void loop() {
  GPIOOnline = 1;
  led_test();
  buttons_update();
  do_center_panel();
  do_left_panel();
  do_right_panel();
}


void led_test(void)
{
  for (int x = 0; x < 40; x++)
  {
    if (x % 8 == ((stepCount / drumDivider) % 8))
    {
      led(x, 1000);
    }
    else
    {
      if (bitRead(row[x / 8], x % 8))
        led(x, 4095);
      else
        led(x, 0);
    }
  }
  for (int i = 0; i < 5; i++)
  {
    if (buttonSelection == i)
      led(i + 40, 4095);
    else
      led(i + 40, 0);
  }
  switch (buttonCount + 2)
  {
    case 0:
      led(45, 4095);
      led(46, 0);
      break;
    case 1:
      led(45, 1024);
      led(46, 0);
      break;
    case 2:
      led(45, 200);
      led(46, 200);
      break;
    case 3:
      led(45, 0);
      led(46, 1024);
      break;
    case 4:
      led(45, 0);
      led(46, 4095);
      break;
  }
}

void do_left_panel(void) // Ross's panel
{
  // CHORD SELECTION
  if (transposeClock >= 60000) {  // one minute
    chordSelect = random(9);
    transpose = random(-12, 12);
    transposeClock = 0;
  }

  // PWM
  //pw = mapfloat(analogRead(32), 0, 1023, 0.0, 1.0);

  // waveform1.pulseWidth(pw);
  //waveform2.pulseWidth(pw);
  //waveform3.pulseWidth(pw);
  //waveform4.pulseWidth(pw);
  //waveform5.pulseWidth(pw);

  switch (chordSelect) {

    // MAJ
    case 1:
      chord[0] = 0;
      chord[1] = 4;
      chord[2] = 7;
      chord[3] = 12;
      chord[4] = 16;
      break;

    // MAJ 1st inversion
    case 2:
      chord[0] = 4;
      chord[1] = 7;
      chord[2] = 12;
      chord[3] = 16;
      chord[4] = 19;
      break;

    // MAJ 2nd inversion
    case 3:
      chord[0] = 7;
      chord[1] = 12;
      chord[2] = 16;
      chord[3] = 19;
      chord[4] = 24;
      break;

    // MIN
    case 4:
      chord[0] = 0;
      chord[1] = 3;
      chord[2] = 7;
      chord[3] = 12;
      chord[4] = 15;
      break;


    // MIN 1st inversion
    case 5:
      chord[0] = 3;
      chord[1] = 7;
      chord[2] = 12;
      chord[3] = 15;
      chord[4] = 19;
      break;


    // MIN second inversion
    case 6:
      chord[0] = 7;
      chord[1] = 12;
      chord[2] = 15;
      chord[3] = 19;
      chord[4] = 24;
      break;

    // major7
    case 7:
      chord[0] = 0;
      chord[1] = 4;
      chord[2] = 7;
      chord[3] = 11;
      chord[4] = 12;
      break;

    // minor7
    case 8:
      chord[0] = 0;
      chord[1] = 3;
      chord[2] = 7;
      chord[3] = 10;
      chord[4] = 12;
      break;

    // C7
    case 9:
      chord[0] = 0;
      chord[1] = 4;
      chord[2] = 7;
      chord[3] = 10;
      chord[4] = 12;
      break;
  }

  // Octave modulation
  debounceTime = 50;

  button1[1] = button1[0];
  button1[0] = digitalRead(2);

  if (button1[0] > button1[1]) {  // && buttonDebounce1 >= debounceTime
    buttonCount--;
  }

  button2[1] = button2[0];
  button2[0] = digitalRead(3);

  if (button2[0] > button2[1]) {   // && buttonDebounce2 >= debounceTime
    buttonCount++;
  }

  buttonCount = max(buttonCount, -2);
  buttonCount = min(buttonCount, 2);

  baseOctave = 60;
  octaveMod = buttonCount * 12;

  waveform1.frequency(mtof(chord[0] + baseOctave + transpose + octaveMod));
  waveform2.frequency(mtof(chord[1] + baseOctave + transpose + octaveMod) + 0.5);
  waveform3.frequency(mtof(chord[2] + baseOctave + transpose + octaveMod) - 0.5);
  waveform4.frequency(mtof(chord[3] + baseOctave + transpose + octaveMod) + 0.75);
  waveform5.frequency(mtof(chord[4] + baseOctave + transpose + octaveMod) - 0.75);

  // Touch sensor reads
  float touchSensor1 = (touchRead(0));
  float touchSensor2 = (touchRead(1));
  float touchSensor3 = (touchRead(30));
  float touchSensor4 = (touchRead(29));
  float touchSensor5 = (touchRead(16));


  // ch. 1 Sensor smoothing
  float sensorDifference1 = (touchSensor1 - sensorMinimum1); // Find the minimum average
  if (sensorDifference1 > 0) {
    sensorSmoothness1 = 3000; // "Attack time"
  }
  else {
    sensorSmoothness1 = 5; // "Release time"
  }
  sensorMinimum1 = sensorMinimum1 + (sensorDifference1 / sensorSmoothness1);

  // ch. 2 Sensor smoothing
  float sensorDifference2 = (touchSensor2 - sensorMinimum2); // Find the minimum average
  if (sensorDifference2 > 0) {
    sensorSmoothness2 = 3000; // "Attack time"
  }
  else {
    sensorSmoothness2 = 5; // "Release time"
  }
  sensorMinimum2 = sensorMinimum2 + (sensorDifference2 / sensorSmoothness2);

  // ch. 3 Sensor smoothing
  float sensorDifference3 = (touchSensor3 - sensorMinimum3); // Find the minimum average
  if (sensorDifference3 > 0) {
    sensorSmoothness3 = 3000; // "Attack time"
  }
  else {
    sensorSmoothness3 = 5; // "Release time"
  }
  sensorMinimum3 = sensorMinimum3 + (sensorDifference3 / sensorSmoothness3);

  // ch. 4 Sensor smoothing
  float sensorDifference4 = (touchSensor4 - sensorMinimum4); // Find the minimum average
  if (sensorDifference4 > 0) {
    sensorSmoothness4 = 3000; // "Attack time"
  }
  else {
    sensorSmoothness4 = 5; // "Release time"
  }
  sensorMinimum4 = sensorMinimum4 + (sensorDifference4 / sensorSmoothness4);

  // ch. 5 Sensor smoothing
  float sensorDifference5 = (touchSensor5 - sensorMinimum5); // Find the minimum average
  if (sensorDifference5 > 0) {
    sensorSmoothness5 = 3000; // "Attack time"
  }
  else {
    sensorSmoothness5 = 5; // "Release time"
  }
  sensorMinimum5 = sensorMinimum5 + (sensorDifference5 / sensorSmoothness5);


  // subtract minimum
  float cleanSensorOutput1 = touchSensor1 - sensorMinimum1;
  float cleanSensorOutput2 = touchSensor2 - sensorMinimum2;
  float cleanSensorOutput3 = touchSensor3 - sensorMinimum3;
  float cleanSensorOutput4 = touchSensor4 - sensorMinimum4;
  float cleanSensorOutput5 = touchSensor5 - sensorMinimum5;

  // truncate highest/lowest
  cleanSensorOutput1 = max(cleanSensorOutput1, 0); // truncate lowest possible value to 0
  cleanSensorOutput1 = min(cleanSensorOutput1, 1200); // truncate highest possible value to 1200

  cleanSensorOutput2 = max(cleanSensorOutput2, 0); // truncate lowest possible value to 0
  cleanSensorOutput2 = min(cleanSensorOutput2, 1200); // truncate highest possible value to 1200

  cleanSensorOutput3 = max(cleanSensorOutput3, 0); // truncate lowest possible value to 0
  cleanSensorOutput3 = min(cleanSensorOutput3, 1200); // truncate highest possible value to 1200

  cleanSensorOutput4 = max(cleanSensorOutput4, 0); // truncate lowest possible value to 0
  cleanSensorOutput4 = min(cleanSensorOutput4, 1200); // truncate highest possible value to 1200

  cleanSensorOutput5 = max(cleanSensorOutput5, 0); // truncate lowest possible value to 0
  cleanSensorOutput5 = min(cleanSensorOutput5, 1200); // truncate highest possible value to 1200

  // Comparators

  int thresh = 1000; // global threshold

  gate1[1] = gate1[0];
  gate1[0] = cleanSensorOutput1 >= thresh; // Comparator threshold for touch sensor

  gate2[1] = gate2[0];
  gate2[0] = cleanSensorOutput2 >= thresh; // Comparator threshold for touch sensor

  gate3[1] = gate3[0];
  gate3[0] = cleanSensorOutput3 >= thresh; // Comparator threshold for touch sensor

  gate4[1] = gate4[0];
  gate4[0] = cleanSensorOutput4 >= thresh; // Comparator threshold for touch sensor

  gate5[1] = gate5[0];
  gate5[0] = cleanSensorOutput5 >= thresh; // Comparator threshold for touch sensor

  // Divide
  divide = map(analogRead(31), 0, 1023, 8, 1); // Division amounts

  if (stepCount % divide == 0) {
    gate1[1] = 0;
    gate2[1] = 0;
    gate3[1] = 0;
    gate4[1] = 0;
    gate5[1] = 0;
  }
  else {
    gate1[1] = 1;
    gate2[1] = 1;
    gate3[1] = 1;
    gate4[1] = 1;
    gate5[1] = 1;
  }

  // ch.1  Note on/off messages
  if (gate1[0] > gate1[1]) {
    envelope1.noteOn();
  }

  if (gate1[1] > gate1[0]) {
    envelope1.noteOff();
  }

  // ch. 2 Note on/off messages

  if (gate2[0] > gate2[1]) {
    envelope2.noteOn();
  }

  if (gate2[1] > gate2[0]) {
    envelope2.noteOff();
  }

  // ch. 3 Note on/off messages

  if (gate3[0] > gate3[1]) {
    envelope3.noteOn();
  }

  if (gate3[1] > gate3[0]) {
    envelope3.noteOff();
  }

  // ch. 4 Note on/off messages

  if (gate4[0] > gate4[1]) {
    envelope4.noteOn();
  }

  if (gate4[1] > gate4[0]) {
    envelope4.noteOff();
  }

  // ch. 5 Note on/off messages

  if (gate5[0] > gate5[1]) {
    envelope5.noteOn();
  }

  if (gate5[1] > gate5[0]) {
    envelope5.noteOff();
  }


  // Map sensor data to filter range
  currentFilterCutoff1 = mapfloat(cleanSensorOutput1, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
  currentFilterCutoff2 = mapfloat(cleanSensorOutput2, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
  currentFilterCutoff3 = mapfloat(cleanSensorOutput3, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
  currentFilterCutoff4 = mapfloat(cleanSensorOutput4, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
  currentFilterCutoff5 = mapfloat(cleanSensorOutput5, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range

  // ch. 1 filter slew
  float cutoffDifference1 = (currentFilterCutoff1 - smoothedFilterCutoff1);
  if (cutoffDifference1 > 0) {
    filterCutoffSlew1 = 100; // "Attack Time"
  }
  else {
    filterCutoffSlew1 = 5; // "Release Time"
  }
  smoothedFilterCutoff1 = smoothedFilterCutoff1 + cutoffDifference1 / filterCutoffSlew1; // Find average

  // ch. 2 filter slew
  float cutoffDifference2 = (currentFilterCutoff2 - smoothedFilterCutoff2);
  if (cutoffDifference2 > 0) {
    filterCutoffSlew2 = 100; // "Attack Time"
  }
  else {
    filterCutoffSlew2 = 5; // "Release Time"
  }
  smoothedFilterCutoff2 = smoothedFilterCutoff2 + cutoffDifference2 / filterCutoffSlew2; // Find average

  // ch. 3 filter slew
  float cutoffDifference3 = (currentFilterCutoff3 - smoothedFilterCutoff3);
  if (cutoffDifference3 > 0) {
    filterCutoffSlew3 = 100; // "Attack Time"
  }
  else {
    filterCutoffSlew3 = 5; // "Release Time"
  }
  smoothedFilterCutoff3 = smoothedFilterCutoff3 + cutoffDifference3 / filterCutoffSlew3; // Find average

  // ch. 4 filter slew
  float cutoffDifference4 = (currentFilterCutoff4 - smoothedFilterCutoff4);
  if (cutoffDifference4 > 0) {
    filterCutoffSlew4 = 100; // "Attack Time"
  }
  else {
    filterCutoffSlew4 = 5; // "Release Time"
  }
  smoothedFilterCutoff4 = smoothedFilterCutoff4 + cutoffDifference4 / filterCutoffSlew4; // Find average

  // ch. 5 filter slew
  float cutoffDifference5 = (currentFilterCutoff5 - smoothedFilterCutoff5);
  if (cutoffDifference5 > 0) {
    filterCutoffSlew5 = 100; // "Attack Time"
  }
  else {
    filterCutoffSlew5 = 5; // "Release Time"
  }
  smoothedFilterCutoff5 = smoothedFilterCutoff5 + cutoffDifference5 / filterCutoffSlew5; // Find average

  filterOffset = map(analogRead(32), 0, 1023, -10000.0, 2000.0);

  filterSum1 = max((smoothedFilterCutoff1 + filterOffset), 200); // truncate lowest possible value to 200
  filterSum2 = max((smoothedFilterCutoff2 + filterOffset), 200); // truncate lowest possible value to 200
  filterSum3 = max((smoothedFilterCutoff3 + filterOffset), 200); // truncate lowest possible value to 200
  filterSum4 = max((smoothedFilterCutoff4 + filterOffset), 200); // truncate lowest possible value to 200
  filterSum5 = max((smoothedFilterCutoff5 + filterOffset), 200); // truncate lowest possible value to 200

  filter1.frequency(filterSum1);
  filter2.frequency(filterSum2);
  filter3.frequency(filterSum3);
  filter4.frequency(filterSum4);
  filter5.frequency(filterSum5);

  float decayTime = mapfloat(analogRead(33), 0, 1023, 40.0, 200.0); // Max decay Range

  envelope1.decay(decayTime);
  envelope2.decay(decayTime);
  envelope3.decay(decayTime);
  envelope4.decay(decayTime);
  envelope5.decay(decayTime);
}

void do_center_panel(void)  //Bens Sequencer
{
  lastOn = totalOn;
  totalOn = 0;
  for (int i = 0; i < 5; i++)
    rowOn[i] = 0;
  for (int r = 0; r < 5; r++)
  {
    for (int c = 0; c < 8; c++)
    {
      if (bitRead(row[r], c))
      {
        rowOn[r]++;
        totalOn++;
      }
    }
  }
  float diff;
  diff = analogRead(A16) - tempo; //was A16, changed to A17 for DRC test
  tempo = tempo + diff / 4;
  tempo = (tempo / 2) + 20;
  if (sinceTempo >= (15000 / (tempo * 8)))
  {
    if (stepCount % rightTiming == 0)
      rightTrigger();
    if (stepCount / drumDivider % 256 == 0)
    {
      int randomSample;
      selectedSample[randomSample] = random(2);
    }
    if (sinceTouch > 4000 && totalOn < offThreshold && stepCount % 64 == 0)
    {
      for (int r = 0; r < 5; r++)
      {
        for (int c = 0; c < 8; c++)
        {
          if (totalOn == offThreshold)
            bitClear(row[r], c);
        }
      }
      if (totalOn < offThreshold)
      {
        for (int w = 0; w < offThreshold; w++)
        {
          int mapStep;
          int mapRow;
          mapStep = random(8);
          mapRow = random(5);
          bitWrite(row[mapRow], mapStep, bitRead(drumTable[mapRow], mapStep));
        }
      }
    }
    if (totalOn >= offThreshold)
    {
      if (lastOn != totalOn)
        sinceThreshold = 0;
      if (sinceThreshold > 400)
      {
        int changeRow = 0;
        int selectedRow;
        int randomStep;
        changeRow = max(rowOn[0], rowOn[1]);
        changeRow = max(changeRow, rowOn[2]);
        changeRow = max(changeRow, rowOn[3]);
        changeRow = max(changeRow, rowOn[4]);
        for (int s = 0; s < 5; s++)
        {
          if (changeRow == rowOn[s])
            selectedRow = s;
        }
        randomStep = random(8);
        if (sinceTouch > 4000)
          bitClear(row[selectedRow], randomStep);
        sinceThreshold = 0;
      }
    }
    /*
       #include "AudioSampleDt_kick.h"
       #include "AudioSampleDt_openhat.h"
       #include "AudioSampleDt_snare.h"
       #include "AudioSampleDt_tamborine.h"
       #include "AudioSampleDt_tom01.h"
    */
    //leftTrigger();
    //rightTrigger();
    if (stepCount % drumDivider == 0)
    {
      if (bitRead(row[0], stepCount / drumDivider % 8))
      {
        switch (selectedSample[0])
        {
          case 0:
            sound0.play(AudioSampleDt_kick);
            break;
          case 1:
            sound0.play(AudioSampleVer04wavfcus);
            break;
        }
      }
      if (bitRead(row[1], stepCount / drumDivider % 8))
      {
        switch (selectedSample[1])
        {
          case 0:
            sound1.play(AudioSampleDt_snare);
            break;
          case 1:
            sound1.play(AudioSampleDt_clap);
            break;
        }
      }
      if (bitRead(row[2], stepCount / drumDivider % 8))
      {
        switch (selectedSample[2])
        {
          case 0:
            sound2.play(AudioSampleDt_cowbell);
            break;
          case 1:
            sound2.play(AudioSampleDt_rimshot);
            break;
        }
      }
      if (bitRead(row[3], stepCount / drumDivider % 8))
      {
        switch (selectedSample[3])
        {
          case 0:
            sound3.play(AudioSampleDt_closedhat);
            break;
          case 1:
            sound3.play(AudioSampleShaker);
            break;
        }
      }
      if (bitRead(row[4], stepCount / drumDivider % 8))
      {
        switch (selectedSample[4])
        {
          case 0:
            sound4.play(AudioSampleDt_tamborine);
            break;
          case 1:
            sound4.play(AudioSampleCastinet);
            break;
        }
      }
    }
    stepCount++;
    clockDuration = sinceTempo;
    sinceTempo = 0;
  }
  // button step sequencer stuff goes here
}


void do_right_panel(void)   // DRC touch panel synth stuff goes here
{
  int rightTimeSelection;
  rightTimeSelection = map(analogRead(A17), 0, 1023, 0, 6);
  rightTiming = timingValues[int(rightTimeSelection)];
  TSPoint p = ts.getPoint(); // a point object holds p.x, p.y, and p.z coordinates
  //Serial.print(" p.x = "); Serial.print(p.x);
  //Serial.print("p.y = "); Serial.println(p.y);
  int constX = constrain(p.x, 60, 950); // A7
  //Serial.print("constX = "); Serial.print(constX);
  int constY = constrain(p.y, 97, 910); //A6
  //Serial.print("consty = "); Serial.println(constY);

  noteSelect = map(constX, 60, 950, 0, 19);
  //Serial.print ("noteSelect = "); Serial.println(noteSelect);
  //waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
  selectionValue = analogRead(selectionPin); //A20 this is used to select the different synth options in lieu of a button/rotary interaface.
  scale[0] = chord[0];
  scale[1] = chord[1];
  scale[2] = chord[2];
  scale[3] = chord[3];
  scale[4] = chord[4];
  scale[5] = chord[0] + 12;
  scale[6] = chord[1] + 12;
  scale[7] = chord[2] + 12;
  scale[8] = chord[3] + 12;
  scale[9] = chord[4] + 12;
  scale[10] = chord[0] + 24;
  scale[11] = chord[1] + 24;
  scale[12] = chord[2] + 24;
  scale[13] = chord[3] + 24;
  scale[14] = chord[4] + 24;
  scale[15] = chord[0] + 36;
  scale[16] = chord[1] + 36;
  scale[17] = chord[2] + 36;
  scale[18] = chord[3] + 36;
  scale[19] = chord[4] + 36;
  //sine1.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
  //Serial.print("selectionValue"); Serial.println(selectionValue);
  ///////////////////////////GUITAR & BITCRUSHING
  if (selectionValue > 0 && selectionValue < 256) { //GUITAR w/ distortion patch: string1&2 > bitcrusher1
    //Serial.println("Guitar ");
    mixer9.gain(2, 1);
    mixer9.gain(1, 1);
    mixer9.gain(0, 1);
    mixer9.gain(3, 1);
    if (toggle == true) { //gate alternates between true and false
      if (constX > 61 && gateTrig == true) { //if ts being touched and gate is true

        string1.noteOn(mtof(scale[noteSelect] + baseOctave + transpose), 1);
        string2.noteOn(mtof(scale[noteSelect] - 12 + baseOctave + transpose), 1);

        gateTrig = false;
        //Serial.println("NoteOn");
      }
    }
    if (toggle == false) {
      if (constX > 61 && gateTrig == true) {
        string1.noteOn(mtof(scale[noteSelect] - 15 + baseOctave + transpose), 1);
        string2.noteOn(mtof(scale[noteSelect] - 12 + baseOctave + transpose), 1);
        //string1.noteOff(0.8);
        gateTrig = false;
      }
    }
    //Y mapped for bitcrushing
    int BitsMappedY = map(constY, 97, 910, 6, 16);
    int sRateMappedY = map(constY, 97, 910,  1, 44100);
    //Serial.print("sRateMappedY = "); Serial.println(sRateMappedY);
    bitcrusher1.bits(16);//(BitsMappedY);    //bitcrusher1.bits(16);
    bitcrusher1.sampleRate(sRateMappedY);       //bitcrusher1.sampleRate(44100);
  }

  /////////////////////////////////WAVEFORM & FILTER
  if (selectionValue > 257 && selectionValue < 512) { //waveform LPF & HPF mixer: waveform4,5,6 > envelope2 > filter2 w/ waveform7 input >
    //waveform frequency is not being changed by noteSelect..
    //Serial.println("Waveform & Filter");
    mixer12.gain(0, 1); //LPF//set gain for other channels
    mixer12.gain(1, 0); //BPF
    mixer12.gain(2, 0); //HPF
    waveform6.begin(1, mtof(scale[noteSelect] + baseOctave + transpose), WAVEFORM_SINE); //X
    //waveform7.begin(1, mtof(scale[noteSelect] + baseOctave + transpose),WAVEFORM_TRIANGLE); //X
    //waveform8.begin(1, mtof(scale[noteSelect] + baseOctave + transpose),WAVEFORM_SQUARE); //X

    //Y mapped for LPF/HPF controlled by waveform input: F = Fcenter * 2^(signal * octaves)
    int LPF_Y = map(constY, 97, 910, 28, 20000);  //change to Filter waveform frequency range
    float PWM = map(constY, 97, 910, -1, 1);
    //Serial.print("LPF_Y = "); Serial.println(LPF_Y);

    pwm1.frequency(PWM);
    pwm1.amplitude(.8);
    envelope6.attack(0);
    envelope6.hold(0);
    envelope6.decay(200);
    envelope6.sustain(1);
    envelope6.release(200);
    //envelope6.decay(TsPot2);

    // waveform frequency mod filter
    // waveform13.begin(1, LPF_Y, WAVEFORM_SINE);
    // waveform13.amplitude(1.0);
    // waveform13.frequency(LPF_Y);

    filter8.frequency(200); //corner frequency controlled by LPF_Y
    filter8.resonance(2); //.7 - 5.0 attenuate beforehand to prevent clipping
    filter8.octaveControl(2); //0-7 octave range. sets attenuation range for filters corner frequency.


    int arpegg = 0;
    if (gateTrig == true) {
      if (constX > 61 && arpegg == 0) { //if being touched and trig is true..
        //Serial.println(arpegg);
        waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
        //waveform7.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
        //waveform8.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
        //waveformX.pulseWidth(amount); ??
        //waveformX.phase(angle); ??

        //waveform6-8 controlled by envelope6
        envelope6.noteOn();
        envelope6.noteOff();

        arpegg++;
        gateTrig = false;
      }
      if (constX > 61 && arpegg == 1) { //if being touched and trig is true..
        //Serial.println(arpegg);
        waveform6.frequency(mtof(scale[noteSelect] - 3 + baseOctave + transpose));
        //waveform7.frequency(mtof(scale[noteSelect] - 3 + baseOctave + transpose));
        //waveform8.frequency(mtof(scale[noteSelect] - 3 + baseOctave + transpose));
        //waveformX.pulseWidth(amount); ??
        //waveformX.phase(angle); ??

        //waveform6-8 controlled by envelope6
        envelope6.noteOn();
        envelope6.noteOff();

        arpegg++;
        gateTrig = false;
      }
      if (constX > 61 && arpegg == 2) { //if being touched and trig is true..
        //Serial.println(arpegg);
        waveform6.frequency(mtof(scale[noteSelect] - 5 + baseOctave + transpose));
        //waveform7.frequency(mtof(scale[noteSelect] - 5 + baseOctave + transpose));
        //waveform8.frequency(mtof(scale[noteSelect] - 5 + baseOctave + transpose));
        //waveformX.pulseWidth(amount); ??
        //waveformX.phase(angle); ??

        //waveform6-8 controlled by envelope6
        envelope6.noteOn();
        envelope6.noteOff();

        arpegg = 0;
        gateTrig = false;
      }

    }

    /*
                    if (constX > 61 && toggle ==true) {  //if being touched and trig is true..
                          //Serial.println("envelope.noteON");
                            waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
                            waveform6.amplitude(1.0);
                            //waveform7.frequency(freq);
                            //waveform7.amplitude();
                            //waveform8.frequency(freq);
                            //waveform8.amplitude();
                            //waveformX.pulseWidth(amount); ??
                            //waveformX.phase(angle); ??

                            //waveform6-8 controlled by envelope6
                            envelope6.noteOn();
                            envelope6.attack(0);
                            envelope6.hold(0);
                            envelope6.decay(200);
                            envelope6.sustain(1);
                            envelope6.noteOff();
                            envelope6.release(200);
                            //envelope6.decay(TsPot2);

                            filter8.frequency(200);
                            filter8.resonance(.5); //.7 - 5.0 attenuate beforehand to prevent clipping
                            filter8.octaveControl(2); 0-7 octave range. sets attenuation range for filters corner frequency.

                            // waveform frequency mod filter
                            waveform13.amplitude(1.0);
                            waveform13.frequency(LPF_Y);
                            //gateTrig = false;

                    }
                    if (constX > 61 && toggle == false) {
                      //Serial.println("envelope.noteOFF");
                            //waveform6.amplitude(0);
                            envelope6.noteOff();
                            envelope6.hold(250);
                            envelope6.decay(500);
                    }
                    else if (constX < 61) {
                      //Serial.println("NoTouch");
                            //  waveform6.amplitude(0);
                            envelope6.noteOff();
                    }
    */
  }
  //////////////////////////////////
  /*
          else if (selectionValue > 513 && selectionValue < 768) { //waveform chord mixer waveform 1&2 > envelope1 > out
                 // Serial.print("waveform chord mixer");
     //
     //Reference this logic for triggering along with master clock
                    if (toggle == true) { //gate alternates between true and false
                            if (constX > 61 && gateTrig ==true){ //if ts being touched and gate is true

                            string1.noteOn(mtof(scale[noteSelect] + baseOctave + transpose),1);
                            gateTrig = false;
                            Serial.println("NoteOn");

                    }
                  }
                  //would like to add tempo mod to this (look at Ross divide % function)
                    if (toggle == false) {
                      if (constX > 61 && gateTrig ==true){
                            string1.noteOff(0.8);
                         gateTrig = false;
                         Serial.println("NoteOff");
                       }
                    }
     //
                if (p.x > 60) { //begin playing when touched
                    waveform11.begin(1.0, mtof(scale[noteSelect] + baseOctave + transpose), WAVEFORM_SINE);
                    waveform12.begin(1.0, mtof(scale[noteSelect] + baseOctave + transpose), WAVEFORM_TRIANGLE);
                    waveform10.begin(1.0, mtof(scale[noteSelect] + baseOctave + transpose), WAVEFORM_SQUARE);
                    waveform9.begin(1.0, mtof(scale[noteSelect] + baseOctave + transpose), WAVEFORM_SAWTOOTH);

                          waveform11.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
                          waveform11.amplitude(1.0);
                          waveform12.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
                          waveform12.amplitude(1.0);
                          //ignore filter6
                          //filter6.frequency(freq); corner freq when input control signal is zero
                          //filter6.resonance(Q); .7 - 5.0 attenuate beforehand to prevent clipping
                          //filter6.octaveControl(octaves); 0-7 octave range. sets attenuation range for filters corner frequency.
                          envelope7.noteOn();
                          //envelope7.attack(0);
                          //envelope7.decay(0);



                          waveform10.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
                          waveform9.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
                          waveform10.amplitude(1.0);
                          waveform9.amplitude(1.0);
                          //ignore filter7
                          //filter7.frequency(freq); corner freq when input control signal is zero
                          //filter7.resonance(Q); .7 - 5.0 attenuate beforehand to prevent clipping
                          //filter7.octaveControl(octaves); 0-7 octave range. sets attenuation range for filters corner frequency.
                          envelope8.noteOn();
                          //envelope8.attack(0);
                          //envelope8.decay(0);


                  }

          }
  */
}
