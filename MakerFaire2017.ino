#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform2;      //xy=330.515625,330.515625
AudioSynthWaveform       waveform3;      //xy=335.515625,428.515625
AudioSynthWaveform       waveform1;      //xy=337.515625,230.515625
AudioSynthWaveform       waveform4;      //xy=340.515625,528.515625
AudioSynthWaveform       waveform5;      //xy=341.515625,623.515625
AudioFilterStateVariable filter2;        //xy=465.515625,336.515625
AudioFilterStateVariable filter3;        //xy=470.515625,434.515625
AudioFilterStateVariable filter1;        //xy=472.515625,236.515625
AudioFilterStateVariable filter4;        //xy=475.515625,534.515625
AudioFilterStateVariable filter5;        //xy=476.515625,629.515625
AudioEffectEnvelope      envelope2;      //xy=600.515625,323.515625
AudioEffectEnvelope      envelope3;      //xy=605.515625,421.515625
AudioEffectEnvelope      envelope1;      //xy=607.515625,223.515625
AudioEffectEnvelope      envelope4;      //xy=610.515625,521.515625
AudioEffectEnvelope      envelope5;      //xy=611.515625,616.515625
AudioPlayMemory          sound1;         //xy=615.515625,754.515625
AudioPlayMemory          sound0;         //xy=616.515625,704.515625
AudioPlayMemory          sound2;         //xy=619.515625,800.515625
AudioPlayMemory          sound3;         //xy=622.515625,850.515625
AudioPlayMemory          sound4;         //xy=791.515625,844.515625
AudioMixer4              mix1;           //xy=797.515625,775.515625
AudioMixer4              mixer1;         //xy=809.515625,414.515625
AudioMixer4              mix2;           //xy=944.515625,793.515625
AudioMixer4              mixer2;         //xy=958.515625,434.515625
AudioSynthWaveformSine   sine1;          //xy=976.515625,912.515625
AudioMixer4              mix3;           //xy=1139.515625,799.515625
AudioOutputI2S           i2s2;           //xy=1283.515625,805.515625
AudioConnection          patchCord1(waveform2, 0, filter2, 0);
AudioConnection          patchCord2(waveform3, 0, filter3, 0);
AudioConnection          patchCord3(waveform1, 0, filter1, 0);
AudioConnection          patchCord4(waveform4, 0, filter4, 0);
AudioConnection          patchCord5(waveform5, 0, filter5, 0);
AudioConnection          patchCord6(filter2, 0, envelope2, 0);
AudioConnection          patchCord7(filter3, 0, envelope3, 0);
AudioConnection          patchCord8(filter1, 0, envelope1, 0);
AudioConnection          patchCord9(filter4, 0, envelope4, 0);
AudioConnection          patchCord10(filter5, 0, envelope5, 0);
AudioConnection          patchCord11(envelope2, 0, mixer1, 1);
AudioConnection          patchCord12(envelope3, 0, mixer1, 2);
AudioConnection          patchCord13(envelope1, 0, mixer1, 0);
AudioConnection          patchCord14(envelope4, 0, mixer1, 3);
AudioConnection          patchCord15(envelope5, 0, mixer2, 1);
AudioConnection          patchCord16(sound1, 0, mix1, 1);
AudioConnection          patchCord17(sound0, 0, mix1, 0);
AudioConnection          patchCord18(sound2, 0, mix1, 2);
AudioConnection          patchCord19(sound3, 0, mix1, 3);
AudioConnection          patchCord20(sound4, 0, mix2, 1);
AudioConnection          patchCord21(mix1, 0, mix2, 0);
AudioConnection          patchCord22(mixer1, 0, mixer2, 0);
AudioConnection          patchCord23(mix2, 0, mix3, 1);
AudioConnection          patchCord24(mixer2, 0, mix3, 0);
AudioConnection          patchCord25(sine1, 0, mix3, 3);
AudioConnection          patchCord26(mix3, 0, i2s2, 0);
AudioConnection          patchCord27(mix3, 0, i2s2, 1);
AudioControlSGTL5000     audioShield;    //xy=1331.515625,695.515625
// GUItool: end automatically generated code

#include <stdint.h>  //touchscreeen
#include "TouchScreen.h"

// These are the pins for the touchscreen
#define YP A6  // must be an analog pin, use "An" notation!
#define XM A7  // must be an analog pin, use "An" notation!
#define YM 8   // can be a digital pin
#define XP 10   // can be a digital pin
#define TsPot1 A18 ///
#define TsPot2 A19 //
#define TsPot3 A20 //

int TsPot1Val = 0;
int TsPot2Val = 0;
int TsPot3Val = 0;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);  //use a multimeter to read the resistance between X+ and X- and replace value which is currently 300.

// Global Clock
elapsedMillis sinceTempo;
int tempo = 120;
int stepCount;

// ALL STUFF FOR ROSS'S PANEL
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
  // Global audio stuff
  AudioMemory(50);
  audioShield.enable();
  audioShield.volume(0.5);

  // Test Oscillator
  sine1.amplitude(0.5); 
  sine1.frequency(440); 

  // Wire
  Wire.begin();
  Wire.setClock(400000);
  pca9685_config(0x40);
  mcp23017_config(0x20, 0xFFFF);

  // Drums mixer
  mix1.gain(0, 0.25); // Drum ch. 1
  mix1.gain(1, 0.25); // Drum ch. 2
  mix1.gain(2, 0.25); // Drum ch. 3
  mix1.gain(3, 0.25); // Drum ch. 4
  mix2.gain(0, 0.5); // Drum mixer 1 daisy chain ==> drum mixer 2
  mix2.gain(1, 0.5); // Drum ch. 5

  // Master Mixer
  mix3.gain(0, 0.25); // Ross
  mix3.gain(1, 0.25); // Ben
  mix3.gain(2, 0.25); // Darcy
  mix3.gain(3, 0.0); // Test Oscillator
    
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
  waveform1.pulseWidth(0.5);
  waveform2.pulseWidth(0.5);
  waveform3.pulseWidth(0.5);
  waveform4.pulseWidth(0.5);
  waveform5.pulseWidth(0.5);

  waveform1.begin(0.5, 0, WAVEFORM_PULSE);
  waveform2.begin(0.5, 0, WAVEFORM_PULSE);
  waveform3.begin(0.5, 0, WAVEFORM_PULSE);
  waveform4.begin(0.5, 0, WAVEFORM_PULSE);
  waveform5.begin(0.5, 0, WAVEFORM_PULSE);

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
  do_center_panel();
  do_left_panel();
  do_right_panel();
  led_test();
  buttons_update();
}


void led_test(void)
{
  static int i = 0;

  led(0, (i + 819 * 0) & 4095);
  led(1, (i + 819 * 1) & 4095);
  led(2, (i + 819 * 2) & 4095);
  led(3, (i + 819 * 3) & 4095);
  led(4, (i + 819 * 4) & 4095);
  i++;
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
  pw = mapfloat(analogRead(32), 0, 1023, 0.0, 1.0);

  waveform1.pulseWidth(pw);
  waveform2.pulseWidth(pw);
  waveform3.pulseWidth(pw);
  waveform4.pulseWidth(pw);
  waveform5.pulseWidth(pw);

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
  waveform2.frequency(mtof(chord[1] + baseOctave + transpose + octaveMod));
  waveform3.frequency(mtof(chord[2] + baseOctave + transpose + octaveMod));
  waveform4.frequency(mtof(chord[3] + baseOctave + transpose + octaveMod));
  waveform5.frequency(mtof(chord[4] + baseOctave + transpose + octaveMod));

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

  float decayTime = mapfloat(analogRead(33), 0, 1023, 12.0, 200.0); // Max decay Range

  envelope1.decay(decayTime);
  envelope2.decay(decayTime);
  envelope3.decay(decayTime);
  envelope4.decay(decayTime);
  envelope5.decay(decayTime);
}

void do_center_panel(void)
{
  if (sinceTempo >= (15000 / tempo))
  {
    stepCount++;
    sinceTempo = 0;
  }
  // button step sequencer stuff goes here
}


void do_right_panel(void)   // touch panel synth stuff goes here
{
    TsPot1Val = analogRead(TsPot1);
    TsPot2Val = analogRead(TsPot2);
    TsPot3Val = analogRead(TsPot3);

    TSPoint p = ts.getPoint();    // a point object holds x y and z coordinates
   /*
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
   */
}









