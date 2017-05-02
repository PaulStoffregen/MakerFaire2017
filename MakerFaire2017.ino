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
// GUItool: begin automatically generated code
AudioSynthWaveform waveform9;            //xy=655.2499923706055,2536.000099182129
AudioSynthWaveform waveform10;       //xy=658.2499923706055,2499.000099182129
AudioSynthWaveform waveform6;       //xy=661.2500038146973,2249.000349998474
AudioSynthWaveform waveform8;       //xy=663.25,2292.000228881836
AudioSynthWaveform waveform7;            //xy=663.2500038146973,2335.000442504883
AudioSynthWaveform waveform11;       //xy=669.2499923706055,2409.000099182129
AudioSynthWaveform waveform12;       //xy=670.2499923706055,2445.000099182129
AudioMixer4 mixer7;                      //xy=828.2499923706055,2521.000099182129
AudioMixer4 mixer3;                      //xy=837.2499923706055,2447.000099182129
AudioSynthWaveform waveform14;            //xy=850.75,2604.25
AudioMixer4 mixer4;                      //xy=869.2499885559082,2314.0001068115234
AudioSynthWaveform waveform2;            //xy=914.5,1612.25
AudioSynthWaveform waveform3;            //xy=919.5,1710.25
AudioSynthWaveform waveform1;            //xy=921.5,1512.25
AudioSynthWaveform waveform4;            //xy=924.5,1810.25
AudioSynthWaveform waveform5;            //xy=925.5,1905.25
AudioFilterStateVariable filter6;        //xy=988.5000076293945,2457.25013923645
AudioFilterStateVariable filter7;        //xy=992.500114440918,2532.250141143799
AudioSynthKarplusStrong string2;         //xy=1022.2499923706055,2256.000099182129
AudioSynthKarplusStrong string1;         //xy=1025.2499923706055,2220.000099182129
AudioFilterStateVariable filter2;        //xy=1049.5,1618.25
AudioEffectEnvelope envelope6;      //xy=1049.2499923706055,2327.000099182129
AudioFilterStateVariable filter3;        //xy=1054.5,1716.25
AudioFilterStateVariable filter1;        //xy=1056.5,1518.25
AudioFilterStateVariable filter4;        //xy=1059.5,1816.25
AudioFilterStateVariable filter5;        //xy=1060.5,1911.25
AudioSynthWaveform waveform13;            //xy=1072.2499923706055,2393.000099182129
AudioEffectEnvelope envelope7;      //xy=1153.2499923706055,2483.000099182129
AudioEffectEnvelope envelope8;      //xy=1153.2499923706055,2531.000099182129
AudioMixer4 mixer6;                      //xy=1173.2499923706055,2240.000099182129
AudioEffectEnvelope envelope2;           //xy=1184.5,1605.25
AudioEffectEnvelope envelope3;           //xy=1189.5,1703.25
AudioEffectEnvelope envelope1;           //xy=1191.5,1505.25
AudioEffectEnvelope envelope4;           //xy=1194.5,1803.25
AudioEffectEnvelope envelope5;           //xy=1195.5,1898.25
AudioFilterStateVariable filter8;        //xy=1194.7500343322754,2336.000066757202
AudioPlayMemory sound1;                  //xy=1199.5,2036.25
AudioPlayMemory sound0;                  //xy=1200.5,1986.25
AudioPlayMemory sound2;                  //xy=1203.5,2082.25
AudioPlayMemory sound3;                  //xy=1206.5,2132.25
AudioEffectBitcrusher bitcrusher1;       //xy=1313.250015258789,2248.000196456909
AudioMixer4 mixer12;                     //xy=1340.2499923706055,2344.000099182129
AudioMixer4 mixer11;                     //xy=1343.2499923706055,2508.000099182129
AudioPlayMemory sound4;                  //xy=1375.5,2126.25
AudioMixer4 mix1;                        //xy=1381.5,2057.25
AudioMixer4 mixer1;                      //xy=1393.5,1696.25
AudioMixer4 mixer9;                      //xy=1461.2499923706055,2280.000099182129
AudioMixer4 mix2;                        //xy=1528.5,2075.25
AudioSynthWaveformSine sine1;            //xy=1532.5000534057617,2152.250062942505
AudioMixer4 mixer2;                      //xy=1542.5,1716.25
AudioMixer4 mixer13;              //xy=1568.2499923706055,2387.000099182129
AudioMixer4 mix3;                        //xy=1723.5,2081.25
AudioOutputI2S i2s2;                     //xy=1867.5,2087.25
AudioConnection patchCord1(waveform9, 0, mixer7, 2);
AudioConnection patchCord2(waveform10, 0, mixer7, 1);
AudioConnection patchCord3(waveform6, 0, mixer4, 0);
AudioConnection patchCord4(waveform8, 0, mixer4, 1);
AudioConnection patchCord5(waveform7, 0, mixer4, 2);
AudioConnection patchCord6(waveform11, 0, mixer3, 1);
AudioConnection patchCord7(waveform12, 0, mixer3, 2);
AudioConnection patchCord8(mixer7, 0, filter7, 0);
AudioConnection patchCord9(mixer3, 0, filter6, 0);
AudioConnection patchCord10(waveform14, 0, filter6, 1);
AudioConnection patchCord11(waveform14, 0, filter7, 1);
AudioConnection patchCord12(mixer4, 0, envelope6, 0);          //(mixer4, 3f59f935.4ccb76);
AudioConnection patchCord13(waveform2, 0, filter2, 0);
AudioConnection patchCord14(waveform3, 0, filter3, 0);
AudioConnection patchCord15(waveform1, 0, filter1, 0);
AudioConnection patchCord16(waveform4, 0, filter4, 0);
AudioConnection patchCord17(waveform5, 0, filter5, 0);
AudioConnection patchCord18(filter6, 0, envelope7, 0);
AudioConnection patchCord19(filter7, 0, envelope8, 0);
AudioConnection patchCord20(string2, 0, mixer6, 1);
AudioConnection patchCord21(string1, 0, mixer6, 0);
AudioConnection patchCord22(filter2, 0, envelope2, 0);
AudioConnection patchCord23(envelope6, 0, filter8, 0);
AudioConnection patchCord24(filter3, 0, envelope3, 0);
AudioConnection patchCord25(filter1, 0, envelope1, 0);
AudioConnection patchCord26(filter4, 0, envelope4, 0);
AudioConnection patchCord27(filter5, 0, envelope5, 0);
AudioConnection patchCord28(waveform13, 0, filter8, 1);
AudioConnection patchCord29(envelope7, 0, mixer11, 1);
AudioConnection patchCord30(envelope8, 0, mixer11, 2);
AudioConnection patchCord31(mixer6, bitcrusher1);
AudioConnection patchCord32(envelope2, 0, mixer1, 1);
AudioConnection patchCord33(envelope3, 0, mixer1, 2);
AudioConnection patchCord34(envelope1, 0, mixer1, 0);
AudioConnection patchCord35(envelope4, 0, mixer1, 3);
AudioConnection patchCord36(envelope5, 0, mixer2, 1);
AudioConnection patchCord37(filter8, 0, mixer12, 0);
AudioConnection patchCord38(filter8, 1, mixer12, 1);
AudioConnection patchCord39(filter8, 2, mixer12, 2);
AudioConnection patchCord40(sound1, 0, mix1, 1);
AudioConnection patchCord41(sound0, 0, mix1, 0);
AudioConnection patchCord42(sound2, 0, mix1, 2);
AudioConnection patchCord43(sound3, 0, mix1, 3);
AudioConnection patchCord44(bitcrusher1, 0, mixer9, 2);
AudioConnection patchCord45(mixer12, 0, mixer13, 1);
AudioConnection patchCord46(mixer11, 0, mixer13, 2);
AudioConnection patchCord47(sound4, 0, mix2, 1);
AudioConnection patchCord48(mix1, 0, mix2, 0);
AudioConnection patchCord49(mixer1, 0, mixer2, 0);
AudioConnection patchCord50(mixer9, 0, mixer13, 0);
AudioConnection patchCord51(mix2, 0, mix3, 1);
AudioConnection patchCord52(sine1, 0, mix3, 3);
AudioConnection patchCord53(mixer2, 0, mix3, 0);
AudioConnection patchCord54(mixer13, 0, mix3, 2);
AudioConnection patchCord55(mix3, 0, i2s2, 0);
AudioConnection patchCord56(mix3, 0, i2s2, 1);
AudioControlSGTL5000 audioShield;        //xy=1915.5,1977.25
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


// Global Clock
int rightTiming=4;
int leftTiming=1;
elapsedMillis sinceTempo;
elapsedMillis sinceThreshold;
elapsedMillis sinceTouch;
elapsedMillis sinceShift;
int timingValues[7]={1,2,4,8,16,32,64};
int drumDivider=8;

//Ben variables
float tempo = 80;
int stepCount;
byte row[5];
boolean selectedSample[5];
int rowOn[5];
int lastOn;
int totalOn;
int offThreshold=8;
byte drumTable[5]={0b01001111,0b10010000,0b11100110,0b11010101,0b11111111};
boolean GPIOOnline=1;

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
        mcp23017_config(0x20, 0xFFFF);

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
}


void rightTrigger() {
        //noteTrig= true;     // Ben's sequencer calls this
        //gateTrig = true;
        //toggle = !toggle;  ///DRC
        //Serial.println(toggle);
		string1.noteOn(mtof(20),1);
}



void led(unsigned int lednum, unsigned int value)
{
        if (GPIOOnline==0) return;

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
        if(r!=0)
        {
                GPIOOnline=0;
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
        r=Wire.endTransmission(false);
        if(r!=0)
        {
                GPIOOnline=0;
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
                                        sinceTouch=0;
                                }
                                if (bitRead(button_high2low[0], b + 8))
                                {
                                        bitWrite(row[1], b, !(bitRead(row[1], b)));
                                        sinceTouch=0;
                                }
                        }
                }
        } else {
                button_high2low[0] = 0;
        }
        Wire.beginTransmission(0x21);
        Wire.write(0x12);
        r=Wire.endTransmission(false);
        if(r!=0)
        {
                GPIOOnline=0;
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
                                        sinceTouch=0;
                                }
                                if (bitRead(button_high2low2[0], b + 8))
                                {
                                        bitWrite(row[3], b, !(bitRead(row[3], b)));
                                        sinceTouch=0;
                                }
                        }
                }
        } else {
                button_high2low2[0] = 0;
        }
        Wire.beginTransmission(0x22);
        Wire.write(0x12);
        r=Wire.endTransmission(false);
        if(r!=0)
        {
                GPIOOnline=0;
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
                                        sinceTouch=0;
                                }
                        }
                }
        } else {
                button_high2low3[0] = 0;
        }
}

void loop() {
        GPIOOnline=1;
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
                if (x % 8 == stepCount/2 % 8)
                {
                        led(x, 1000);
                }
                else
                {
                        if(bitRead(row[x/8],x%8))
                                led(x, 4095);
                        else
                                led(x,0);
                }
        }
}

void do_left_panel(void) // Ross's panel
{
        // CHORD SELECTION  // DRC could be used for controlling scales with pushbuttons currently changed at random
        /*
           if (transposeClock >= 60000) {  // one minute
           chordSelect = random(9);
           transpose = random(-12, 12);
           transposeClock = 0;
           }
         */
        // PWM
        pw = mapfloat(analogRead(32), 0, 1023, 0.0, 1.0);

        waveform1.pulseWidth(pw);
        waveform2.pulseWidth(pw);
        waveform3.pulseWidth(pw);
        waveform4.pulseWidth(pw);
        waveform5.pulseWidth(pw);

//int chordSelect = map(analogRead(TsPot1), 0, 1023, 1, 9);
//Serial.print("chordSelect = "); Serial.println(chordSelect);

        switch (chordSelect) {
// DRC chordSelect determined by random clock or could be assigned to buttons
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

        if (button1[0] > button1[1]) { // && buttonDebounce1 >= debounceTime
                buttonCount--;
        }

        button2[1] = button2[0];
        button2[0] = digitalRead(3);

        if (button2[0] > button2[1]) { // && buttonDebounce2 >= debounceTime
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
        //DRC cleanSensorOutputX triggers the threshold so it always begins playing the tone in tempo with the BPM

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

        if (stepCount % divide == 0) { //DRC remainder flips between even and odd
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

void do_center_panel(void)  //Bens Sequencer
{
        lastOn=totalOn;
        totalOn=0;
        for(int i=0; i<5; i++)
                rowOn[i]=0;
        for(int r=0; r<5; r++)
        {
                for(int c=0; c<8; c++)
                {
                        if(bitRead(row[r],c))
                        {
                                rowOn[r]++;
                                totalOn++;
                        }
                }
        }
        float diff;
        diff = analogRead(A16) - tempo; //was A16, changed to A17 for DRC test
        //tempo = tempo + diff / 4;
        //tempo = (tempo / 2) + 20;
        if (sinceTempo >= (15000 / (tempo*8)))
        {
			if(stepCount%rightTiming==0)
				rightTrigger();
                if(stepCount/drumDivider%256==0)
                {
                        int randomSample;
                        selectedSample[randomSample]=random(2);
                }
                if(sinceTouch>4000&&totalOn<offThreshold&&stepCount%64==0)
                {
                        for (int r=0; r<5; r++)
                        {
                                for (int c=0; c<8; c++)
                                {
                                        if(totalOn==offThreshold)
                                                bitClear(row[r],c);
                                }
                        }
                        if(totalOn<offThreshold)
                        {
                                for(int w=0; w<offThreshold; w++)
                                {
                                        int mapStep;
                                        int mapRow;
                                        mapStep=random(8);
                                        mapRow=random(5);
                                        bitWrite(row[mapRow],mapStep,bitRead(drumTable[mapRow],mapStep));
                                }
                        }
                }
                if(totalOn>=offThreshold)
                {
                        if(lastOn!=totalOn)
                                sinceThreshold=0;
                        if(sinceThreshold>400)
                        {
                                int changeRow=0;
                                int selectedRow;
                                int randomStep;
                                changeRow=max(rowOn[0],rowOn[1]);
                                changeRow=max(changeRow,rowOn[2]);
                                changeRow=max(changeRow,rowOn[3]);
                                changeRow=max(changeRow,rowOn[4]);
                                for(int s=0; s<5; s++)
                                {
                                        if(changeRow==rowOn[s])
                                                selectedRow=s;
                                }
                                randomStep=random(8);
                                if(sinceTouch>4000)
                                        bitClear(row[selectedRow],randomStep);
                                sinceThreshold=0;
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
				if(stepCount%drumDivider==0)
				{
                if (bitRead(row[0], stepCount/drumDivider % 8))
                {
                        switch(selectedSample[0])
                        {
                        case 0:
                                sound0.play(AudioSampleDt_kick);
                                break;
                        case 1:
                                sound0.play(AudioSampleVer04wavfcus);
                                break;
                        }
                }
                if (bitRead(row[1], stepCount/drumDivider % 8))
                {
                        switch(selectedSample[1])
                        {
                        case 0:
                                sound1.play(AudioSampleDt_snare);
                                break;
                        case 1:
                                sound1.play(AudioSampleDt_clap);
                                break;
                        }
                }
                if (bitRead(row[2], stepCount/drumDivider % 8))
                {
                        switch(selectedSample[2])
                        {
                        case 0:
                                sound2.play(AudioSampleDt_cowbell);
                                break;
                        case 1:
                                sound2.play(AudioSampleDt_rimshot);
                                break;
                        }
                }
                if (bitRead(row[3], stepCount/drumDivider % 8))
                {
                        switch(selectedSample[3])
                        {
                        case 0:
                                sound3.play(AudioSampleDt_closedhat);
                                break;
                        case 1:
                                sound3.play(AudioSampleShaker);
                                break;
                        }
                }
                if (bitRead(row[4], stepCount/drumDivider % 8))
                {
                        switch(selectedSample[4])
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
                sinceTempo = 0;
        }
        // button step sequencer stuff goes here
}


void do_right_panel(void)   // DRC touch panel synth stuff goes here
{
	int rightTimeSelection;
	rightTimeSelection=map(analogRead(A17),0,1023,0,6);
	rightTiming=timingValues[int(rightTimeSelection)];
        TSPoint p = ts.getPoint(); // a point object holds p.x, p.y, and p.z coordinates
        //Serial.print(" p.x = "); Serial.print(p.x);
        //Serial.print("p.y = "); Serial.println(p.y);
        int constX = constrain(p.x, 60, 950); // A7
        //Serial.print("constX = "); Serial.print(constX);
        int constY = constrain(p.y, 97, 910); //A6
        Serial.print("consty = "); Serial.println(constY);


        noteSelect = map(constX, 60, 950, 0, 19);
        waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose));

        Serial.print ("noteSelect = "); Serial.println(noteSelect);
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

///////////////////////////
        if (selectionValue > 0 && selectionValue < 256) { //GUITAR w/ distortion patch: string1&2 > bitcrusher1
//strings arent being triggered directly on the beat.  Ask ben and ross what best solution is for this
                //Serial.println("GUITAR ");
                mixer9.gain(2, 1);
                mixer9.gain(1, 1);
                mixer9.gain(0, 1);
                mixer9.gain(3, 1);
                int twelve = 12;
                int twentyfour = 24;
				/*
                if (toggle == true) { //gate alternates between true and false
                        if (constX > 61 && gateTrig ==true){ //if ts being touched and gate is true

                        string1.noteOn(mtof(scale[noteSelect] + baseOctave + transpose),1);
                        string2.noteOn(mtof(scale[noteSelect] - 12 + baseOctave + transpose),1);
                        //string2.noteOn(500,1);
                        //string1.noteOn(1200,1);


                        gateTrig = false;
                        Serial.println("NoteOn");

                }
              }
              //would like to add tempo mod to this (look at Ross divide % function)
                if (toggle == false) {
                  if (constX > 61 && gateTrig ==true){
                    string1.noteOn(mtof(scale[noteSelect] - 15 + baseOctave + transpose),1);
                    string2.noteOn(mtof(scale[noteSelect] - 12 + baseOctave + transpose),1);

                        //string1.noteOff(0.8);
                     gateTrig = false;
                     Serial.println("NoteOff");
                   }
                }
				*/

                //Y mapped for bitcrushing
                int BitsMappedY = map(constY, 97, 910, 6, 16);
                int sRateMappedY = map(constY, 97, 910,  1, 44100);
                Serial.print("sRateMappedY = "); Serial.println(sRateMappedY);
                bitcrusher1.bits(16);//(BitsMappedY);    //bitcrusher1.bits(16);
                bitcrusher1.sampleRate(sRateMappedY);       //bitcrusher1.sampleRate(44100);
                //string2. if needed
        }

/////////////////////////////////
        else if (selectionValue > 257 && selectionValue < 512) { //waveform LPF & HPF mixer: waveform4,5,6 > envelope2 > filter2 w/ waveform7 input >
//waveform frequency is not being changed by noteSelect..
                //Serial.println("Waveform & Filter");
                mixer12.gain(0, 1); //LPF//set gain for other channels
                mixer12.gain(1, 0); //BPF
                mixer12.gain(2, 0); //HPF
                waveform6.begin(WAVEFORM_SINE); //X
              //  waveform7.begin(0, (noteSelect), WAVEFORM_SINE); //X
              //  waveform8.begin(0, (noteSelect), WAVEFORM_SINE); //X

                //Y mapped for LPF/HPF controlled by waveform input: F = Fcenter * 2^(signal * octaves)
                int LPF_Y = map(constY, 97, 910, 28, 3186);  //change to Filter waveform frequency range
                //Serial.print("LPF_Y = "); Serial.println(LPF_Y);
                waveform13.begin(1, LPF_Y, WAVEFORM_SINE);

                if (constX > 61 && toggle ==true) {  //if being touched and trig is true..
                      Serial.println("envelope.noteON");
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
                        //envelope6.noteOff();
                        //envelope6.release(1000);
                        //envelope6.decay(500);
                        //envelope6.attack/decay(TsPot2);

                        filter8.frequency(200);
                        //filter8.resonance(Q); .7 - 5.0 attenuate beforehand to prevent clipping
                        //filter8.octaveControl(octaves); 0-7 octave range. sets attenuation range for filters corner frequency.

                        // waveform frequency mod filter
                        waveform13.amplitude(1.0);
                        waveform13.frequency(LPF_Y);
                        //gateTrig = false;

                }
                if (constX > 61 && toggle == false) {
                  Serial.println("envelope.noteOFF");
                        //waveform6.amplitude(0);
                        envelope6.noteOff();
                        envelope6.hold(250);
                        envelope6.decay(500);
                }
                else if (constX < 61) {
                  Serial.println("NoTouch");
                        //  waveform6.amplitude(0);
                        envelope6.noteOff();
                }
        }
//////////////////////////////////
        else if (selectionValue > 513 && selectionValue < 768) { //waveform chord mixer waveform 1&2 > envelope1 > out
                Serial.print("waveform chord mixer");
/*
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
*/
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
}
