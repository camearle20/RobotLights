#include <Wire.h>

#include "Reactor.h"
#include "LightingManager.h"

void setup() {
	Wire.begin(0x42); //Start I2C as a slave at address 0x42
	Wire.onReceive(Reactor::react); //Tell I2C to use our reactor to route requests
	LightingManager::init(); //Initialize the lights
}

void loop() {
	LightingManager::tick(); //Update the lights
}