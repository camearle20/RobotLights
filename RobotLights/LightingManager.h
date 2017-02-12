#pragma once
#include <FastLED.h>

#define STRIP1_PIN 5
#define STRIP2_PIN 6
#define STRIP3_PIN 3

#define STRIP1_NUM 38
#define STRIP2_NUM 68
#define STRIP3_NUM 30

#define LFX_SPEED 10


class LightingManager {
public:
	static void init(); //Initialize the lights
	static void tick(); //Update the lights

	enum Color {
		OFF,
		RED,
		ORANGE,
		YELLOW,
		GREEN,
		BLUE,
		PURPLE,
		RAINBOW
	};

	enum Motion {
		NONE,
		PULSE,
		FLASH,
		SOLID,
		RACE
	};

	static void setUnderglowColor(Color color);
	static void setUnderglowMotion(Motion motion);

	static void reset(); //Total light reset

private:
	static CRGB strip1[STRIP1_NUM];
	static CRGB strip2[STRIP2_NUM];
	static CRGB strip3[STRIP3_NUM];

	static Color underglowColor;
	static Motion underglowMotion;
};