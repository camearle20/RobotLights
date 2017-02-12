#pragma once

#include <Arduino.h>

class Reactor {
public:
	static void react(int num);
private:
	static byte currentPacket;
};