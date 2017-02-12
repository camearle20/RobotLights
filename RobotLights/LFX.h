#pragma once
#include <Arduino.h>
#include <FastLED.h>

struct LFX {
	//OFF
	static void off(CRGB strip[], int stripLength);

	//SOLID
	static void underglow_solid_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);
	static void underglow_solid_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length);

	//FLASH
	static void underglow_flash_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_flash_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);

	//PULSE
	static void underglow_pulse_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_pulse_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);

	//RACE
	static void underglow_race_red(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_orange(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_yellow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_green(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_blue(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_purple(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);
	static void underglow_race_rainbow(CRGB strip1[], int strip1Length, CRGB strip2[], int strip2Length, int speed);

	//TURRET
	static void turret_shotFired(CRGB strip[], int stripLength);
	static void turret_solid_red(CRGB strip[], int stripLength);
	static void turret_solid_orange(CRGB strip[], int stripLength);
	static void turret_solid_yellow(CRGB strip[], int stripLength);
	static void turret_solid_green(CRGB strip[], int stripLength);
	static void turret_solid_blue(CRGB strip[], int stripLength);
	static void turret_solid_purple(CRGB strip[], int stripLength);
	static void turret_solid_rainbow(CRGB strip[], int stripLength);

};