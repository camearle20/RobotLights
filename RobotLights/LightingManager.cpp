#include "LightingManager.h"
#include "LFX.h"

CRGB LightingManager::strip1[STRIP1_NUM];
CRGB LightingManager::strip2[STRIP2_NUM];
CRGB LightingManager::strip3[STRIP3_NUM];

LightingManager::Color LightingManager::underglowColor;
LightingManager::Motion LightingManager::underglowMotion;

void LightingManager::reset() {
	underglowColor = OFF;
	underglowMotion = SOLID;
}

void LightingManager::setUnderglowColor(LightingManager::Color color) {
	underglowColor = color;
}

void LightingManager::setUnderglowMotion(LightingManager::Motion motion) {
	underglowMotion = motion;
}

void LightingManager::tick() {
	switch (underglowColor) {
	case OFF:
		LFX::off(strip1, STRIP1_NUM);
		LFX::off(strip2, STRIP2_NUM);
		break;
	case RED:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_red(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_red(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_red(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_red(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case ORANGE:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_orange(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_orange(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_orange(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_orange(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case YELLOW:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_yellow(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_yellow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_yellow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_yellow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case GREEN:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_green(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_green(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_green(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_green(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case BLUE:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_blue(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_blue(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_blue(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_blue(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case PURPLE:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_purple(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_purple(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_purple(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_purple(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break;
	case RAINBOW:
		switch (underglowMotion) {
		case SOLID:
			LFX::underglow_solid_rainbow(strip1, STRIP1_NUM, strip2, STRIP2_NUM);
			break;
		case FLASH:
			LFX::underglow_flash_rainbow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case PULSE:
			LFX::underglow_pulse_rainbow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		case RACE:
			LFX::underglow_race_rainbow(strip1, STRIP1_NUM, strip2, STRIP2_NUM, LFX_SPEED);
			break;
		}
		break; 
	}
	FastLED.show(); //Update the lights
}

void LightingManager::init() {
	FastLED.addLeds<NEOPIXEL, STRIP1_PIN>(strip1, STRIP1_NUM); //Add strip 1
	FastLED.addLeds<NEOPIXEL, STRIP2_PIN>(strip2, STRIP2_NUM); //Add strip 2
	FastLED.addLeds<NEOPIXEL, STRIP3_PIN>(strip3, STRIP3_NUM); //Add strip 3
}