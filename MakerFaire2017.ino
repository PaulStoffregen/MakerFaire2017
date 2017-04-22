#include <Wire.h>

void setup() {
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







