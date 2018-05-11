#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <stdint.h>  //touchscreeen
#include "TouchScreen.h"
#include <Bounce.h>
#include "AudioSampleKick1.h"
#include "AudioSampleHat1.h"
#include "AudioSampleHat2.h"
#include "AudioSampleHat3.h"
#include "AudioSampleHat4.h"
#include "AudioSampleHat5.h"
#include "AudioSamplePerc1.h"
#include "AudioSamplePerc2.h"
#include "AudioSamplePerc3.h"
#include "AudioSamplePerc4.h"
#include "AudioSamplePerc5.h"
#include "AudioSampleSnare1.h"
#include "AudioSampleSnare2.h"
#include "AudioSampleSnare3.h"
#include "AudioSampleSnare4.h"
#include "AudioSampleSnare5.h"
#include "AudioSampleClap1.h"
#include "AudioSampleClap2.h"
#include "AudioSampleClap3.h"

const unsigned int *kickList[1]={AudioSampleKick1};
const unsigned int *snareList[5]={AudioSampleSnare1,AudioSampleSnare2,AudioSampleSnare3,AudioSampleSnare4,AudioSampleSnare5};
const unsigned int *clapList[3]={AudioSampleClap1,AudioSampleClap2,AudioSampleClap3};
const unsigned int *hatList[5]={AudioSampleHat1,AudioSampleHat2,AudioSampleHat3,AudioSampleHat4,AudioSampleHat5};
const unsigned int *percList[5]={AudioSamplePerc1,AudioSamplePerc2,AudioSamplePerc3,AudioSamplePerc4,AudioSamplePerc5};

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   lfoMod1;        //xy=137,101
AudioSynthWaveformSine   lfoMod2;        //xy=142,239
AudioSynthWaveformSine   lfoMod3;        //xy=146,400
AudioSynthWaveformSine   lfoMod4;        //xy=154,561
AudioSynthWaveformSine   lfoMod5;        //xy=156,718
AudioSynthWaveformSineModulated sine_fm1;       //xy=272,95
AudioSynthWaveformSineModulated sine_fm2;       //xy=273,242
AudioSynthWaveformSineModulated sine_fm4;       //xy=273,559
AudioSynthWaveformSineModulated sine_fm3;       //xy=279,399
AudioSynthWaveformSineModulated sine_fm5;       //xy=280,719
AudioSynthWaveformPWM    waveform1;      //xy=413,94
AudioSynthWaveformPWM    waveform4;      //xy=413,558
AudioSynthWaveformPWM    waveform2;      //xy=415,239
AudioSynthWaveformPWM    waveform3;      //xy=419,395
AudioSynthWaveformPWM    waveform5;      //xy=419,721
AudioFilterStateVariable filter2;        //xy=554,245
AudioFilterStateVariable filter1;        //xy=557,102
AudioFilterStateVariable filter3;        //xy=559,400
AudioFilterStateVariable filter4;        //xy=564,563
AudioFilterStateVariable filter5;        //xy=568,725
AudioEffectEnvelope      envelope2;      //xy=689,232
AudioEffectEnvelope      envelope1;      //xy=692,89
AudioEffectEnvelope      envelope3;      //xy=694,387
AudioEffectEnvelope      envelope4;      //xy=699,550
AudioEffectEnvelope      envelope5;      //xy=703,712
AudioMixer4              mixer1;         //xy=898,323
AudioSynthWaveform       waveform6;      //xy=932,912
AudioSynthKarplusStrong  string2;        //xy=935,854
AudioSynthWaveform       waveform7;      //xy=937,947
AudioSynthKarplusStrong  string1;        //xy=938,818
AudioMixer4              mixer2;         //xy=1047,343
AudioMixer4              mixer4;         //xy=1082,944
AudioSynthWaveform       waveform8;      //xy=1090,996
AudioMixer4              mixer6;         //xy=1102,855
AudioPlayMemory          sound1;         //xy=1128,651
AudioPlayMemory          sound0;         //xy=1129,601
AudioPlayMemory          sound2;         //xy=1132,697
AudioPlayMemory          sound3;         //xy=1135,747
AudioSynthWaveform       waveform10;     //xy=1201,1090
AudioSynthWaveform       waveform11;     //xy=1201,1126
AudioSynthWaveform       waveform9;      //xy=1202,1055
AudioSynthWaveform       waveform12;     //xy=1202,1162
AudioSynthWaveformPWM    pwm1;           //xy=1229,996
AudioEffectBitcrusher    bitcrusher1;    //xy=1242,863
AudioPlayMemory          sound4;         //xy=1304,741
AudioMixer4              mix1;           //xy=1310,672
AudioMixer4              mixer3;         //xy=1364,1101
AudioMixer4              mixer12;        //xy=1378,988
AudioMixer4              mixer9;         //xy=1390,895
AudioMixer4              mix2;           //xy=1457,690
AudioSynthWaveformSine   sine1;          //xy=1461,767
AudioSynthWaveformSine   sine3;          //xy=1495,1143
AudioMixer4              mixer13;        //xy=1594,993
AudioMixer4              mix3;           //xy=1648,679
AudioEffectEnvelope      envelope6;      //xy=1771,1001
AudioOutputI2S           i2s2;           //xy=1796,702
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
AudioConnection          patchCord16(filter2, 0, envelope2, 0);
AudioConnection          patchCord17(filter1, 0, envelope1, 0);
AudioConnection          patchCord18(filter3, 0, envelope3, 0);
AudioConnection          patchCord19(filter4, 0, envelope4, 0);
AudioConnection          patchCord20(filter5, 0, envelope5, 0);
AudioConnection          patchCord21(envelope2, 0, mixer1, 1);
AudioConnection          patchCord22(envelope1, 0, mixer1, 0);
AudioConnection          patchCord23(envelope3, 0, mixer1, 2);
AudioConnection          patchCord24(envelope4, 0, mixer1, 3);
AudioConnection          patchCord25(envelope5, 0, mixer2, 1);
AudioConnection          patchCord26(mixer1, 0, mixer2, 0);
AudioConnection          patchCord27(waveform6, 0, mixer4, 0);
AudioConnection          patchCord28(string2, 0, mixer6, 1);
AudioConnection          patchCord29(waveform7, 0, mixer4, 1);
AudioConnection          patchCord30(string1, 0, mixer6, 0);
AudioConnection          patchCord31(mixer2, 0, mix3, 0);
AudioConnection          patchCord32(mixer4, 0, mixer12, 0);
AudioConnection          patchCord33(waveform8, pwm1);
AudioConnection          patchCord34(mixer6, bitcrusher1);
AudioConnection          patchCord35(sound1, 0, mix1, 1);
AudioConnection          patchCord36(sound0, 0, mix1, 0);
AudioConnection          patchCord37(sound2, 0, mix1, 2);
AudioConnection          patchCord38(sound3, 0, mix1, 3);
AudioConnection          patchCord39(waveform10, 0, mixer3, 1);
AudioConnection          patchCord40(waveform11, 0, mixer3, 2);
AudioConnection          patchCord41(waveform9, 0, mixer3, 0);
AudioConnection          patchCord42(waveform12, 0, mixer3, 3);
AudioConnection          patchCord43(pwm1, 0, mixer12, 1);
AudioConnection          patchCord44(bitcrusher1, 0, mixer9, 0);
AudioConnection          patchCord45(sound4, 0, mix2, 1);
AudioConnection          patchCord46(mix1, 0, mix2, 0);
AudioConnection          patchCord47(mixer3, 0, mixer13, 2);
AudioConnection          patchCord48(mixer12, 0, mixer13, 1);
AudioConnection          patchCord49(mixer9, 0, mixer13, 0);
AudioConnection          patchCord50(mix2, 0, mix3, 1);
AudioConnection          patchCord51(sine1, 0, mix3, 3);
AudioConnection          patchCord52(sine3, 0, mixer13, 3);
AudioConnection          patchCord53(mixer13, envelope6);
AudioConnection          patchCord54(mix3, 0, i2s2, 0);
AudioConnection          patchCord55(mix3, 0, i2s2, 1);
AudioConnection          patchCord56(envelope6, 0, mix3, 2);
AudioControlSGTL5000     audioShield;    //xy=1844,592
// GUItool: end automatically generated code



// Darcys Touchscreen Pins and Buttons
#define YP A6  // must be an analog pin, use "An" notation!
#define XM A7  // was A7must be an analog pin, use "An" notation!
#define YM 8   // can be a digital pin
#define XP 10   // can be a digital pin
//#define TsPot1 A18 //
#define TsPot2 A18 //
#define selectionPin A20 //
//A16 tempo pot  using A17 for DRC test sketch
int Pot1 = 0;
int Pot2 = 0;
int modeSelect = 0;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 370);  //use a multimeter to read the resistance between X+ and X- and replace value which is currently 300.
float reverbControl = 0;
//Boolean trigger for darcy to use BPM to trigger notes
bool noteTrig = false;
bool gateTrig = false;
bool toggle = false;
int arpegg = 0;
int buttonSelection=0;
//End of Darcys Touchscreen


// Global Clock
int rightTiming = 4;
int leftTiming = 1;
elapsedMillis sinceTempo;
elapsedMillis sinceThreshold;
elapsedMillis sinceTouch;
elapsedMillis sinceShift;
elapsedMillis sinceVolume;
elapsedMillis sinceRightTrigger;
elapsedMillis sinceTouchRead;
int clockDuration;
int timingValues[3] = {4,8,16};
int drumDivider = 8;

//Ben variables
float tempo = 80;
int stepCount;
byte row[5];
boolean selectedSample[5];
int rowOn[5];
int lastOn;
int totalOn;
int offThreshold = 10;
byte drumTable[5] = {0b01001111, 0b10010000, 0b11100110, 0b11010101, 0b11111111};
boolean GPIOOnline = 1;
int buttonMapping[40]={0,1,2,3,32,33,34,35, 4, 5, 6, 7, 36, 37, 38, 39, 8, 9, 10, 11, 40, 41, 42, 43, 12, 13, 14, 15, 44, 45, 46, 47, 16, 17, 18, 19, 48, 49, 50, 51};
boolean currentButtons[64];
boolean lastButtons[64];
// Ross' Capsense Panel and Midi quantizing
elapsedMillis transposeClock;
elapsedMillis buttonDebounce1;
elapsedMillis buttonDebounce2;

//int touchSensor1 = 0;
//int touchSensor2 = 0;
//int touchSensor3 = 0;
//int touchSensor4 = 0;
//int touchSensor5 = 0;

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
int thresh[5] = {1900,1900,1900,2050,2050}; // global threshold

float filterOffset = 0;

float pw = 0;

int chordSelect = 0;
int chord[5] = {0, 0, 0, 0, 0};

const int notesInScale = 30;
int scale[notesInScale] = {};
// for (int i = 0; i < notesInScale; i ++ ) {
//   scale[i] = 0;
// }
int noteSelect = 0;

int baseOctave = 0;
int transpose = 0;

boolean button1[2];
boolean button2[2];
int buttonCount = 0;
int debounceTime = 0;
float touchSensor[5];
float touchSensor1=1800;
float touchSensor2=1800;
float touchSensor3=1800;
float touchSensor4=1800;
float touchSensor5=1800;
float touchBaseline[5]={1800,1800,1800,1800,1800};
bool touchPrevious[5]={false,false,false,false,false};

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
	Serial1.setTX(26);
	Serial1.setRX(27);
	Serial1.begin(38400);
	analogReadResolution(10);
	// Global audio stuff
	AudioMemory(50);
	audioShield.enable();
	audioShield.volume(0);
	
	// Test Oscillator
	sine1.amplitude(0.5);
	sine1.frequency(440);
	
	// Wire
	Wire.begin();
	Wire.setClock(400000);
	pca9685_config(0x40);
	pca9685_config(0x41);
	pca9685_config(0x42);
	pca9685_config(0x43);
	mcp23017_config(0x20, 0xFFFF);
	mcp23017_config(0x21, 0xFFFF);
	mcp23017_config(0x22, 0xFFFF);
	mcp23017_config(0x23, 0xFFFF);
	
	// Drums mixer
	mix1.gain(0, 2.0); // Drum ch. 1
	mix1.gain(1, 0.7); // Drum ch. 2
	mix1.gain(2, 0.6); // Drum ch. 3
	mix1.gain(3, 1.0); // Drum ch. 4
	mix2.gain(0, 0.5); // Drum mixer 1 daisy chain ==> drum mixer 2
	mix2.gain(1, 0.8); // Drum ch. 5
	
	// Master Mixer
	mix3.gain(0, 0.6); // Ross
	mix3.gain(1, 0.7); // Ben
	mix3.gain(2, 0.45); // Darcy
	mix3.gain(3, 0); // Test Oscillator  //connected to DRC test scales
	
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
	
	mixer1.gain(0, 0.5);
	mixer1.gain(1, 0.5);
	mixer1.gain(2, 0.5);
	mixer1.gain(3, 0.5);
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
	mixer3.gain(0,1);
	mixer3.gain(1, 1);
	mixer3.gain(2, 1);
	mixer3.gain(3, 1);
	
	mixer4.gain(0, 1);
	mixer4.gain(1, 1);
	mixer4.gain(2, 1);
	
	mixer6.gain(0, 1);
	mixer6.gain(1, 1);
	
	mixer9.gain(0, 1.6);
	mixer9.gain(1, 1);
	
	mixer12.gain(0, 1);
	mixer12.gain(1, 1);
	mixer12.gain(2, 1);
	
	//mixer9.gain(0, 1);
	//mixer11.gain(0, 1);
	//mixer12.gain(0, 1);
	waveform6.begin(.25, 0, WAVEFORM_SINE); //X
	waveform7.begin(.25, 0, WAVEFORM_SQUARE); //X
	waveform8.begin(.25, 0, WAVEFORM_TRIANGLE); //X
	
	waveform10.begin(.25, 0, WAVEFORM_TRIANGLE);
	waveform9.begin(.25, 0, WAVEFORM_SAWTOOTH);
	
	envelope6.sustain(0);
	envelope6.attack(1.5);
	envelope6.hold(0.5);
	envelope6.releaseNoteOn(0);
	
	
}


void rightTrigger() {
	//noteTrig= true;     // Ben's sequencer calls this
	toggle = !toggle;  ///DRC
	//Serial.print("trigger");
	sinceRightTrigger = 0;
	arpegg++;
	if(arpegg == 3) {
		arpegg = 0;
	}
	TSPoint p = ts.getPoint(); // a point object holds p.x, p.y, and p.z coordinates
	int touchXClamped = constrain(p.x, 40, 985); // A7
	int touchX = map(touchXClamped, 985, 40, 0, 100);
	//  Serial.print(" touchX = "); Serial.print(touchX);
	int touchYClamped = constrain(p.y, 40, 920);
	int touchY = map(touchYClamped, 40, 920, 0, 100); //A6
	//  Serial.print(" touchY = "); Serial.print(touchY);
	
	int noteSelectY = map(touchY, 0, 100, 7, 20);
	//Serial.println(touchY);
	noteSelect = map(touchX, 0, 100, 7, 20);
	if (modeSelect == 1) { //GUITAR w/ distortion patch: string1&2 > bitcrusher1
		//Serial.println("Guitar ");
		//OFF
		mixer13.gain(1, 0);
		mixer13.gain(2, 0);
		//ON
		mixer13.gain(0, 1.4); //put global
		envelope6.noteOn();
		
		
		if (touchX < 100) { //if ts being touched and gate is true
			//mixer13.gain(2, 0);
			//mixer13.gain(1, 0);
			string1.noteOn(mtof(scale[noteSelect] + baseOctave + transpose - 12), .25);
			//string2.noteOn(mtof(scale[noteSelect] + baseOctave + transpose) - 12.05, 1);
			
			gateTrig = false;
			//  Serial.println("111");
		}
		
		
		if (touchX < 100) {
			//string1.noteOn(mtof(scale[noteSelect] + baseOctave + transpose) - 24, 1);
			string2.noteOn(mtof(scale[noteSelect] + baseOctave + transpose - 24), .25);
			//string1.noteOff(0.8);
			gateTrig = false;
			//Serial.println("222");
			
			Serial1.write('a');
		}
		
		//Y mapped for bitcrushing
		//  int touchYClamped = constrain(touchY, 0, 100);
		//Serial.print("touchYClamped = "); Serial.print(touchYClamped);
		
		int BitsMappedY = map(touchY, 0, 100, 16, 12);
		//int sRateMappedY = map(p.y, 1023, 600,  33100, 1);  //what kind of formula could I use to make the bitcrushingsound good across all frequencies?
		int sRateMappedY = map(touchY, 0, 100,  22000, 4000);  //what kind of formula could I use to make the bitcrushingsound good across all frequencies?
		
		//Serial.print("sRateMappedY = "); Serial.print(sRateMappedY);
		bitcrusher1.bits(BitsMappedY);//(BitsMappedY);    //bitcrusher1.bits(16);
		bitcrusher1.sampleRate(sRateMappedY);       //bitcrusher1.sampleRate(44100);
	}
	
	/////////////////////////////////WAVEFORM & FILTER
	if (modeSelect == 2) { //waveform LPF & HPF mixer: waveform4,5,6 > envelope2 > filter2 w/ waveform7 input >
		//waveform frequency is not being changed by noteSelect..
		//Serial.println("Waveform & Filter");
		//mixer12.gain(0, 1); //LPF//set gain for other channels
		//mixer12.gain(1, 0); //BPF
		//mixer12.gain(2, 0); //HPF
		//waveform6.begin(1, 1, WAVEFORM_SINE); //X
		//waveform7.begin(1, mtof(scale[noteSelect] + baseOctave + transpose),WAVEFORM_TRIANGLE); //X
		//waveform8.begin(1, mtof(scale[noteSelect] + baseOctave + transpose),WAVEFORM_SQUARE); //X
		
		//Y mapped for LPF/HPF controlled by waveform input: F = Fcenter * 2^(signal * octaves)
		//  int LPF_Y = map(touchY, 97, 910, 28, 20000);  //change to Filter waveform frequency range
		//float PWM = ( map(touchY, 97, 910, 50.00, 0)/ 10.00);
		//  int decayControl = map(analogRead(TsPot2), 0, 1023, 0, 30);
		//Serial.print("PWM = "); Serial.print(PWM);
		//Serial.print("LPF_Y = "); Serial.print(LPF_Y);
		
		pwm1.frequency(mtof(scale[noteSelect] + baseOctave + transpose-24));
		
		//OFF
		mixer13.gain(0, 0);
		mixer13.gain(2, 0);
		//ON
		mixer13.gain(1, 0.5);
		envelope6.noteOn();
		
		pwm1.amplitude(0.28);
		waveform8.amplitude(0.8);
		waveform8.frequency(float(touchY)/50);
		
		
		//  if(gateTrig == true) {
		if (touchX < 100 && arpegg == 0) { //if being touched and trig is true..
			//  Serial.print(arpegg);
			// mixer12.gain(0, 1); //LPF//set gain for other channels
			// mixer12.gain(1, 0); //BPF
			// mixer12.gain(2, 0); //HPF
			waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose - 12));
			//waveform7.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
			//waveform8.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
			//waveformX.pulseWidth(amount); ??
			//waveformX.phase(angle); ??
			
			//waveform6-8 controlled by envelope6
			//envelope6.noteOn();
			
			if(sinceRightTrigger > 200) {
				envelope6.noteOff();
				//          sinceRightTrigger = 0;
			} else {
				Serial1.write('b');
			}
			//arpegg++;
			gateTrig = false;
		}
		if (touchX < 100 && arpegg == 1) { //if being touched and trig is true..
			//Serial.print(arpegg);
			//      mixer12.gain(0, 1); //LPF//set gain for other channels
			//      mixer12.gain(1, 0); //BPF
			//      mixer12.gain(2, 0); //HPF
			waveform6.frequency(mtof(scale[noteSelect -1] + baseOctave + transpose - 12));
			//waveform7.frequency(mtof(scale[noteSelect] - 3 + baseOctave + transpose));
			//waveform8.frequency(mtof(scale[noteSelect] - 3 + baseOctave + transpose));
			//waveformX.pulseWidth(amount); ??
			//waveformX.phase(angle); ??
			
			//waveform6-8 controlled by envelope6
			//envelope6.noteOn();
			if(sinceRightTrigger > 200) {
				envelope6.noteOff();
				//          sinceRightTrigger = 0;
			} else {
				Serial1.write('b');
			}
			//arpegg++;
			gateTrig = false;
		}
		if (touchX < 100 && arpegg == 2) { //if being touched and trig is true..
			//  Serial.print(arpegg);
			//            mixer12.gain(0, 1); //LPF//set gain for other channels
			//            mixer12.gain(1, 0); //BPF
			//            mixer12.gain(2, 0); //HPF
			waveform6.frequency(mtof(scale[noteSelect -2] + baseOctave + transpose - 12));
			//waveform7.frequency(mtof(scale[noteSelect] - 5 + baseOctave + transpose));
			//waveform8.frequency(mtof(scale[noteSelect] - 5 + baseOctave + transpose));
			//waveformX.pulseWidth(amount); ??
			//waveformX.phase(angle); ??
			
			//waveform6-8 controlled by envelope6
			//envelope6.noteOn();
			if(sinceRightTrigger > 200) {
				envelope6.noteOff();
				//          sinceRightTrigger = 0;
				
			} else {
				Serial1.write('b');
			}
			//arpegg = 0;
			gateTrig = false;
		}
		if (touchX == 100) {
			envelope6.noteOff();
			//          mixer12.gain(0, 0); //LPF//set gain for other channels
			//          mixer12.gain(1, 0); //BPF
			//          mixer12.gain(2, 0); //HPF
			
		}
		
		//  }
		
		/*
			if (touchX > 61 && toggle ==true) {  //if being touched and trig is true..
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
			if (touchX > 61 && toggle == false) {
			//Serial.println("envelope.noteOFF");
			//waveform6.amplitude(0);
			envelope6.noteOff();
			envelope6.hold(250);
			envelope6.decay(500);
			}
			else if (touchX < 61) {
			//Serial.println("NoTouch");
			//  waveform6.amplitude(0);
			envelope6.noteOff();
			}
		*/
	}
	//////////////////////////////////
	
	
	
	if (modeSelect == 3) { //waveform chord mixer waveform 1&2 > envelope1 > o
		// Serial.print("waveform chord mixer");
		
		//OFF
		mixer13.gain(1, 0); //LPF//set gain for other channels
		mixer13.gain(0, 0);
		//ON
		mixer13.gain(2, 1.2);
		if (touchX < 100) { //if being touched and trig is true..
			envelope6.noteOn();
			//Serial.print(arpegg);
			// mixer12.gain(0, 1); //LPF//set gain for other channels
			//waveform9.amplitude(1);
			//waveform10.amplitude(1);
			//    waveform11.amplitude(1);
			//      waveform12.amplitude(1);
			waveform9.frequency(mtof(scale[noteSelectY]  - 24 + baseOctave + transpose));
			waveform10.frequency(mtof(scale[noteSelect] - 24 + baseOctave + transpose));
			//waveform11.frequency(mtof(scale[noteSelectY] + baseOctave + transpose) - 12.5);
			//waveform12.frequency(mtof(scale[noteSelect] + baseOctave + transpose) - 24.5);
			
			//waveformX.pulseWidth(amount); ??
			//waveformX.phase(angle); ??
			//waveform6-8 controlled by envelope6
			//envelope6.noteOn();
			
			Serial1.write('c');
		}
		
		//arpegg++;
		// end if(gateTrigger)
		if(touchX > 99) {
			// waveform9.amplitude(0);
			// waveform10.amplitude(0);
			// waveform11.amplitude(0);
			// waveform12.amplitude(0);
			
			envelope6.noteOff();
			//   envelope7.noteOff();
		}
		
		
		
	}
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
	int numExpanders=4;
	for(int e=0;e<numExpanders;e++)
	{
		int r;
		Wire.beginTransmission(0x20+e);
		Wire.write(0x12);
		r=Wire.endTransmission(false);
		if(r!=0)
		{
			GPIOOnline=0;
			return;
		}
		Wire.requestFrom(0x20+e, 2);
		if (Wire.available() >= 2) 
		{
			word state;
			state = Wire.read();
			state |= Wire.read() << 8;
			for(int i=0;i<16;i++)
			{
				lastButtons[i+16*e]=currentButtons[i+16*e];
				currentButtons[i+16*e]=bitRead(state,i);
			}
		}
	}
}

void loop() {
	
	GPIOOnline=1;
	led_test();
	buttons_update();
	do_center_panel();
	do_right_panel();
	if(sinceVolume>25)
	{
		float volSetting;
		//volSetting=float(analogRead(A15))/1023.*0.4+0.6;
		volSetting=float(analogRead(A15))/1023.*0.4+0.2;
		audioShield.volume(volSetting);
		sinceVolume=0;
	}
	//ROSS Filter
	filterOffset = map(analogRead(32), 0, 1023, 200.0, 10000.0);
	
	//filterSum1 = max((smoothedFilterCutoff1 + filterOffset), 200); // truncate lowest possible value to 200
	//filterSum2 = max((smoothedFilterCutoff2 + filterOffset), 200); // truncate lowest possible value to 200
	//filterSum3 = max((smoothedFilterCutoff3 + filterOffset), 200); // truncate lowest possible value to 200
	//filterSum4 = max((smoothedFilterCutoff4 + filterOffset), 200); // truncate lowest possible value to 200
	//filterSum5 = max((smoothedFilterCutoff5 + filterOffset), 200); // truncate lowest possible value to 200
	
	filter1.frequency(filterOffset);
	filter2.frequency(filterOffset);
	filter3.frequency(filterOffset);
	filter4.frequency(filterOffset);
	filter5.frequency(filterOffset);
	float decayTime = mapfloat(analogRead(33), 0, 1023, 130.0, 1000.0); // Max decay Range
	
	envelope1.decay(decayTime);
	envelope2.decay(decayTime);
	envelope3.decay(decayTime);
	envelope4.decay(decayTime);
	envelope5.decay(decayTime);
}

void led_test(void)
{
	for (int x = 0; x < 40; x++)
	{
		if (x % 8 == ((stepCount / drumDivider) % 8))
		{
			led(buttonMapping[x], 1000);
		}
		else
		{
			if (bitRead(row[x / 8], x % 8))
			led(buttonMapping[x], 4095);
			else
			led(buttonMapping[x], 0);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (buttonSelection == i)
		led(i + 52, 4095);
		else
		led(i + 52, 0);
	}
	switch (buttonCount + 2)
	{
		case 0:
		led(20, 4095);
		led(21, 0);
		break;
		case 1:
		led(20, 1024);
		led(21, 0);
		break;
		case 2:
		led(20, 200);
		led(21, 200);
		break;
		case 3:
		led(20, 0);
		led(21, 1024);
		break;
		case 4:
		led(20, 0);
		led(21, 4095);
		break;
	}
}

void do_left_panel(void) // Ross's panel
{
	int upSmooth=1;
	int downSmooth=4;
	float capDiff[5];
	touchSensor[0] = (touchRead(16));
	touchSensor[1] = (touchRead(29));
	touchSensor[2] = (touchRead(30));
	touchSensor[3] = (touchRead(1));
	touchSensor[4] = (touchRead(0));
	
	for (int i=0; i < 5; i++) {
	  Serial.print(touchSensor[i]);
	  Serial.print(", ");
    }
	Serial.print("   -->   ");

	for (int i=0; i < 5; i++) {
	  float diff = touchSensor[i] - touchBaseline[i];
	  Serial.print(diff);
	  Serial.print(", ");
	  if (diff > 0) {
	    int diff_threshold = 340;
            if (touchPrevious[i]) diff_threshold = 250;
            if (diff > diff_threshold) {
              touchSensor[i] = 10000;
              touchPrevious[i] = true;
            } else {
              touchSensor[i] = 0;
              touchPrevious[i] = false;
            }
	    touchBaseline[i] += diff / 70;
	  } else {
	    int diff_threshold = -390;
            if (touchPrevious[i]) diff_threshold = -270;
#ifdef HORRIBLE_ELECTRICAL_INTERFERENCE
            // Where there's terrible noise, consider any change from the
            // the baseline to be a note trigger.
            if (diff < diff_threshold) {
              touchSensor[i] = 10000;
              touchPrevious[i] = true;
            } else {
              touchSensor[i] = 0;
              touchPrevious[i] = false;
            }
	    touchBaseline[i] += diff / 40;
#else
            // For normal conditions, a decrease from the baseline means
            // a touch has just ended and the baseline is adapting
            touchSensor[i] = 0;
            touchPrevious[i] = false;
	    touchBaseline[i] += diff / 12;
#endif
	  }
	}
	touchSensor1 = touchSensor[0];
	touchSensor2 = touchSensor[1];
	touchSensor3 = touchSensor[2];
	touchSensor4 = touchSensor[3];
	touchSensor5 = touchSensor[4];

	/*
	capDiff[0]=touchSensor[0]-touchSensor1;
	if(capDiff[0]>=0)
	touchSensor1=touchSensor1+capDiff[0]/upSmooth;
	else
	touchSensor1=touchSensor1+capDiff[0]/downSmooth;
	capDiff[1]=touchSensor[1]-touchSensor2;
	if(capDiff[1]>=0)
	touchSensor2=touchSensor2+capDiff[1]/upSmooth;
	else
	touchSensor2=touchSensor2+capDiff[1]/downSmooth;
	capDiff[2]=touchSensor[2]-touchSensor3;
	if(capDiff[2]>=0)
	touchSensor3=touchSensor3+capDiff[2]/upSmooth;
	else
	touchSensor3=touchSensor3+capDiff[2]/downSmooth;
	capDiff[3]=touchSensor[3]-touchSensor4;
	if(capDiff[3]>=0)
	touchSensor4=touchSensor4+capDiff[3]/upSmooth;
	else
	touchSensor4=touchSensor4+capDiff[3]/downSmooth;
	capDiff[4]=touchSensor[4]-touchSensor5;
    if(capDiff[4]>=0)
    touchSensor5=touchSensor5+capDiff[4]/upSmooth;
    else
    touchSensor5=touchSensor5+capDiff[4]/downSmooth;
    */



Serial.print("      ");
for (int i=0; i < 5; i++) {
	Serial.print(touchBaseline[i]);
	Serial.print(", ");
}
Serial.println("------"); 
// CHORD SELECTION
if (transposeClock >= 60000) { // one minute
	chordSelect = random(4)+1;
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
	
	// MIN
	case 2:
	chord[0] = 0;
	chord[1] = 3;
	chord[2] = 7;
	chord[3] = 12;
	chord[4] = 15;
	break;
	
	// major7
	case 3:
	chord[0] = 0;
	chord[1] = 4;
	chord[2] = 7;
	chord[3] = 11;
	chord[4] = 12;
	break;
	
	// minor7
	case 4:
	chord[0] = 0;
	chord[1] = 3;
	chord[2] = 7;
	chord[3] = 10;
	chord[4] = 12;
	break;
}

// Octave modulation
debounceTime = 50;


baseOctave = 60;
octaveMod = buttonCount * 12;

waveform1.frequency(mtof(chord[0] + baseOctave + transpose + octaveMod));
waveform2.frequency(mtof(chord[1] + baseOctave + transpose + octaveMod) + 0.5);
waveform3.frequency(mtof(chord[2] + baseOctave + transpose + octaveMod) - 0.5);
waveform4.frequency(mtof(chord[3] + baseOctave + transpose + octaveMod) + 0.75);
waveform5.frequency(mtof(chord[4] + baseOctave + transpose + octaveMod) - 0.75);

// Touch sensor reads
//16,29,30,1,0
// ch. 1 Sensor smoothing
/*
	float sensorDifference1 = (touchSensor1 - sensorMinimum1); // Find the minimum average
	if (sensorDifference1 > 0) {
	sensorSmoothness1 = 30; // "Attack time"
	}
	else {
	sensorSmoothness1 = 5; // "Release time"
	}
	sensorMinimum1 = sensorMinimum1 + (sensorDifference1 / sensorSmoothness1);
	
	// ch. 2 Sensor smoothing
	float sensorDifference2 = (touchSensor2 - sensorMinimum2); // Find the minimum average
	if (sensorDifference2 > 0) {
	sensorSmoothness2 = 30; // "Attack time"
	}
	else {
	sensorSmoothness2 = 5; // "Release time"
	}
	sensorMinimum2 = sensorMinimum2 + (sensorDifference2 / sensorSmoothness2);
	
	// ch. 3 Sensor smoothing
	float sensorDifference3 = (touchSensor3 - sensorMinimum3); // Find the minimum average
	if (sensorDifference3 > 0) {
	sensorSmoothness3 = 30; // "Attack time"
	}
	else {
	sensorSmoothness3 = 5; // "Release time"
	}
	sensorMinimum3 = sensorMinimum3 + (sensorDifference3 / sensorSmoothness3);
	
	// ch. 4 Sensor smoothing
	float sensorDifference4 = (touchSensor4 - sensorMinimum4); // Find the minimum average
	if (sensorDifference4 > 0) {
	sensorSmoothness4 = 30; // "Attack time"
	}
	else {
	sensorSmoothness4 = 5; // "Release time"
	}
	sensorMinimum4 = sensorMinimum4 + (sensorDifference4 / sensorSmoothness4);
	
	// ch. 5 Sensor smoothing
	float sensorDifference5 = (touchSensor5 - sensorMinimum5); // Find the minimum average
	if (sensorDifference5 > 0) {
	sensorSmoothness5 = 30; // "Attack time"
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
*/
// Comparators

/*
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
*/
// ch.1  Note on/off messages
if (touchSensor1>thresh[0]) {
	envelope1.noteOn();
	Serial1.write('A');
}

if (touchSensor1<thresh[0]) {
	envelope1.noteOff();
}

// ch. 2 Note on/off messages

if (touchSensor2>thresh[1]) {
	envelope2.noteOn();
	Serial1.write('B');
}

if (touchSensor2<thresh[1]) {
	envelope2.noteOff();
}

// ch. 3 Note on/off messages

if (touchSensor3>thresh[2]) {
	envelope3.noteOn();
	Serial1.write('C');
}

if (touchSensor3<thresh[2]) {
	envelope3.noteOff();
}

// ch. 4 Note on/off messages

if (touchSensor4>thresh[3]) {
	envelope4.noteOn();
	Serial1.write('D');
}

if (touchSensor4<thresh[3]) {
	envelope4.noteOff();
}

// ch. 5 Note on/off messages
if (touchSensor5>thresh[4]) {
	envelope5.noteOn();
	Serial1.write('E');
}

if (touchSensor5<thresh[4]) {
	envelope5.noteOff();
}
/*
	
	// Map sensor data to filter range
	currentFilterCutoff1 = mapfloat(cleanSensorOutput1, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
	currentFilterCutoff2 = mapfloat(cleanSensorOutput2, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
	currentFilterCutoff3 = mapfloat(cleanSensorOutput3, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
	currentFilterCutoff4 = mapfloat(cleanSensorOutput4, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
	currentFilterCutoff5 = mapfloat(cleanSensorOutput5, 0, 1200, 0, 10000); // Maximum sensor range mapped to maximum filter range
	
	// ch. 1 filter slew
	float cutoffDifference1 = (currentFilterCutoff1 - smoothedFilterCutoff1);
	if (cutoffDifference1 > 0) {
	filterCutoffSlew1 = 20; // "Attack Time"
	}
	else {
	filterCutoffSlew1 = 5; // "Release Time"
	}
	smoothedFilterCutoff1 = smoothedFilterCutoff1 + cutoffDifference1 / filterCutoffSlew1; // Find average
	
	// ch. 2 filter slew
	float cutoffDifference2 = (currentFilterCutoff2 - smoothedFilterCutoff2);
	if (cutoffDifference2 > 0) {
	filterCutoffSlew2 = 20; // "Attack Time"
	}
	else {
	filterCutoffSlew2 = 5; // "Release Time"
	}
	smoothedFilterCutoff2 = smoothedFilterCutoff2 + cutoffDifference2 / filterCutoffSlew2; // Find average
	
	// ch. 3 filter slew
	float cutoffDifference3 = (currentFilterCutoff3 - smoothedFilterCutoff3);
	if (cutoffDifference3 > 0) {
	filterCutoffSlew3 = 20; // "Attack Time"
	}
	else {
	filterCutoffSlew3 = 5; // "Release Time"
	}
	smoothedFilterCutoff3 = smoothedFilterCutoff3 + cutoffDifference3 / filterCutoffSlew3; // Find average
	
	// ch. 4 filter slew
	float cutoffDifference4 = (currentFilterCutoff4 - smoothedFilterCutoff4);
	if (cutoffDifference4 > 0) {
	filterCutoffSlew4 = 20; // "Attack Time"
	}
	else {
	filterCutoffSlew4 = 5; // "Release Time"
	}
	smoothedFilterCutoff4 = smoothedFilterCutoff4 + cutoffDifference4 / filterCutoffSlew4; // Find average
	
	// ch. 5 filter slew
	float cutoffDifference5 = (currentFilterCutoff5 - smoothedFilterCutoff5);
	if (cutoffDifference5 > 0) {
	filterCutoffSlew5 = 20; // "Attack Time"
	}
	else {
	filterCutoffSlew5 = 5; // "Release Time"
	}
	smoothedFilterCutoff5 = smoothedFilterCutoff5 + cutoffDifference5 / filterCutoffSlew5; // Find average
*/



}

void do_center_panel(void)  //Bens Sequencer
{
	leftTiming = timingValues[map(analogRead(31), 0, 1023, 2,0)]*2; // Division amounts
	for(int i=0;i<40;i++)
	{
		if(currentButtons[buttonMapping[i]]<lastButtons[buttonMapping[i]])
		{
			bitWrite(row[i/8],i%8,!bitRead(row[i/8],i%8));
			sinceTouch=0;
		}
	}
	for(int i=0;i<3;i++)
	{
		if(currentButtons[i+52]<lastButtons[i+52])
		buttonSelection=i;
	}
	if(currentButtons[20]<lastButtons[20])
	buttonCount--;
	if(currentButtons[21]<lastButtons[21])
	buttonCount++;
	if(buttonCount>2)
	buttonCount=2;
	if(buttonCount<-2)
	buttonCount=-2;
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
	tempo = tempo + diff / 40;
	int finalTempo=tempo /10  + 80;
	if (sinceTempo >= (15000 / (finalTempo*8)))
	{
		if(stepCount%rightTiming==0)
		rightTrigger();
		if(stepCount%leftTiming==0)
		leftTrigger();
		if(stepCount/drumDivider%256==0)
		{
			int randomSample;
			randomSample=random(5);
			if(randomSample==3)
			selectedSample[3]=random(3);
			else
			selectedSample[randomSample]=random(5);
		}
		if(sinceTouch>30000&&totalOn<offThreshold&&stepCount%64==0)
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
					//	bitWrite(row[mapRow],mapStep,bitRead(drumTable[mapRow],mapStep));
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
				sound4.play(percList[selectedSample[4]]);
				Serial1.write('4');
			}
			if (bitRead(row[1], stepCount/drumDivider % 8))
			{
				sound2.play(hatList[selectedSample[2]]);
				Serial1.write('2');
			}
			if (bitRead(row[2], stepCount/drumDivider % 8))
			{
				sound1.play(snareList[selectedSample[1]]);
				Serial1.write('1');
			}
			if (bitRead(row[3], stepCount/drumDivider % 8))
			{
				sound3.play(clapList[selectedSample[3]%3]);
				Serial1.write('3');
			}
			if (bitRead(row[4], stepCount/drumDivider % 8))
			{
				sound0.play(kickList[0]);
				Serial1.write('0');
			}
		}
		stepCount++;
		clockDuration=sinceTempo;
		//Serial.println(tempo);
		sinceTempo = sinceTempo-clockDuration;
	}
	// button step sequencer stuff goes here
}

void leftTrigger()
{
	do_left_panel();
}

void do_right_panel(void)   // DRC touch panel synth stuff goes here
{
	//    Serial.print("modeSelect");
	//      Serial.print(modeSelect);
	int rightTimeSelection=map(analogRead(A17),0,1023,2,0);
	rightTiming=timingValues[int(rightTimeSelection)];
	//Serial.print(" p.x = "); Serial.print(p.x);
	//Serial.print("p.y = "); Serial.print(p.y);
	//int envelope6Control = map(analogRead(TsPot2), 0, 1023, 0.00, 2.00);
	//      float envelope6Control = float(analogRead(TsPot2)) / 511.5;
	int envelope6Control = (analogRead(TsPot2)+40);
	envelope6.decay(envelope6Control);
	//      envelope6.decay(envelope6Control);
	//  Serial.print(" envelope6Control = "); Serial.print(envelope6Control);
	
	
	//  Serial.print (" noteSelect = "); Serial.println(noteSelect);
	//waveform6.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
	modeSelect = buttonSelection+1;
	//  Serial.print(modeSelect);
	//A20 this is used to select the different synth options in lieu of a button/rotary interaface.
	
	scale[1] = chord[0] - 12;
	scale[2] = chord[1] - 12;
	scale[3] = chord[2] - 12;
	scale[4] = chord[3] - 12;
	scale[5] = chord[4] - 12;
	scale[6] = chord[0];
	scale[7] = chord[1];
	scale[8] = chord[2];
	scale[9] = chord[3];
	scale[10] = chord[4];
	scale[11] = chord[0] + 12;
	scale[12] = chord[1] + 12;
	scale[13] = chord[2] + 12;
	scale[14] = chord[3] + 12;
	scale[15] = chord[4] + 12;
	scale[16] = chord[0] + 24;
	scale[17] = chord[1] + 24;
	scale[18] = chord[2] + 24;
	scale[19] = chord[3] + 24;
	scale[20] = chord[4] + 24;
	scale[21] = chord[0] + 36;
	scale[22] = chord[1] + 36;
	scale[23] = chord[2] + 36;
	scale[24] = chord[3] + 36;
	scale[25] = chord[4] + 36;
	//sine1.frequency(mtof(scale[noteSelect] + baseOctave + transpose));
	//Serial.print("modeSelect"); Serial.println(modeSelect);
	///////////////////////////GUITAR & BITCRUSHING
	
	//
	//Serial.println(" ");
	
}
