#include "LFX.h"
#include <FastLED.h>

void LFX::off(CRGB strip[], int stripLength) {
	for (int i = 0; i < stripLength; i++) {
		strip[i] = CRGB::Black;
	}
}

void LFX::underglow_solid_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Red;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Red;
	}
}

void LFX::underglow_solid_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Orange;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Orange;
	}
}

void LFX::underglow_solid_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Yellow;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Yellow;
	}
}

void LFX::underglow_solid_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Green;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Green;
	}
}

void LFX::underglow_solid_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Blue;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Blue;
	}
}

void LFX::underglow_solid_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Purple;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Purple;
	}
}

void LFX::underglow_solid_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length) {
	for (int i = 0; i < strip1Length; i++) {
		strip1[i] = CRGB::Red;
	}
	for (int j = 0; j < strip2Length; j++) {
		strip2[j] = CRGB::Red;
	}
}

void LFX::underglow_flash_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_flash_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}

void LFX::underglow_pulse_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_pulse_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}

void LFX::underglow_race_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}
void LFX::underglow_race_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed) {}


