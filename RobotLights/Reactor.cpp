#include "Reactor.h"

#include <Wire.h>
#include "LightingManager.h"

byte Reactor::currentPacket = 0x00;

void Reactor::react(int num) {
	while (Wire.available()) { //While there is data available to be read
		currentPacket = Wire.read(); //Read one byte from the available data and store it
		switch (currentPacket) {
		case 0: //reset
			LightingManager::reset();
			break;
		case 1: //solid red
			LightingManager::setUnderglowColor(LightingManager::Color::RED);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 2: //solid orange
			LightingManager::setUnderglowColor(LightingManager::Color::ORANGE);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 3: //solid yellow
			LightingManager::setUnderglowColor(LightingManager::Color::YELLOW);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 4: //solid green
			LightingManager::setUnderglowColor(LightingManager::Color::GREEN);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 5: //solid blue
			LightingManager::setUnderglowColor(LightingManager::Color::BLUE);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 6: //solid purple
			LightingManager::setUnderglowColor(LightingManager::Color::PURPLE);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		case 7: //solid rainbow
			LightingManager::setUnderglowColor(LightingManager::Color::RAINBOW);
			LightingManager::setUnderglowMotion(LightingManager::Motion::SOLID);
			break;
		}
	}
}