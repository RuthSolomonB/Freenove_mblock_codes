#ifndef SOUND_h
#define SOUND_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>

#define PIN_BATTERY A0
#define PIN_BUZZER A0

class Sound{
public:
	Sound();
	
	void MakeSound();
	void StopSound();	
};

#endif
