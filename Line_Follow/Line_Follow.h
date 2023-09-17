#ifndef _LINE_FOLLOW_h
#define _LINE_FOLLOW_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>
 //#include <SoftwareSerial.h>
 
 	#define PIN_TRACKING_LEFT A1
	#define PIN_TRACKING_CENTER A2
	#define PIN_TRACKING_RIGHT  A3
 

class Line_Follow
{
	public:
		Line_Follow();
		
		int getTrackingSensorVal(int);
};

#endif
