#include <Wire.h>

void setup() {
	Wire.begin();
	Wire.setClock(400000);
	Wire.beginTransmission(0x40);
	Wire.write(0);
	Wire.write(0x20);
	Wire.write(0x04);
	Wire.endTransmission();
}

void led(unsigned int lednum, unsigned int value)
{
	if (lednum > 15) return;

	Wire.beginTransmission((uint8_t)(0x40 + (lednum >> 4)));
	//Wire.beginTransmission(0x40);
	Wire.write(6 + ((lednum & 15) << 2));
	//Wire.write(6);
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
	Serial.println(r);
}



void loop() {
	for (int i=0; i < 4096; i+=8) {
		led(0, (i + 819 * 0) & 4095);
		led(1, (i + 819 * 1) & 4095);
		led(2, (i + 819 * 2) & 4095);
		led(3, (i + 819 * 3) & 4095);
		led(4, (i + 819 * 4) & 4095);
		delay(1);
	}
}
