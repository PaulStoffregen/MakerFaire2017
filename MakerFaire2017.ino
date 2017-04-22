#include <Wire.h>

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

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


void setup() {
    AudioMemory(50);
      // turn on the output
  audioShield.enable();
  audioShield.volume(0.5);
  mixer1.gain(0.2);
  mixer2.gain(0.2);
  mixer3.gain(0.2);
  mixer4.gain(0.2);
  mixer5.gain(0.2);

	Wire.begin();
	Wire.setClock(400000);
	pca9685_config(0x40);
	mcp23017_config(0x20, 0xFFFF);
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
	// cap touch stuff goes here
}


void do_center_panel(void)
{
	// button step sequencer stuff goes here
}


void do_right_panel(void)
{
	// touch panel synth stuff goes here
}







