#ifndef MOTION_h
#define MOTION_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>

#define MOTOR_DIRECTION     0 // is a boolean
#define PIN_DIRECTION_RIGHT 3
#define PIN_DIRECTION_LEFT  4
#define PIN_MOTOR_PWM_RIGHT 5
#define PIN_MOTOR_PWM_LEFT  6

#define PIN_TRACKING_LEFT A1
#define PIN_TRACKING_CENTER A2
#define PIN_TRACKING_RIGHT  A3

class Motion{
	public:
		Motion();
		
		void setMotion(int, int);
		void setCustomMotion(int, int);
		void setSharpTurn (int,int);
		void motorRun();
	private:
		double speedl, speedr;

		
};

#endif
