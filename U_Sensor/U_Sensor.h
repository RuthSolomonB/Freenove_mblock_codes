#ifndef U_SENSOR_h
#define U_SENSOR_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>
 //#include <SoftwareSerial.h>
 
 #include "Servo.h"             //include servo library
 
#define PIN_SERVO      2       //define servo pin

#define PIN_SONIC_TRIG    7    //define Trig pin
#define PIN_SONIC_ECHO    8    //define Echo pin

#define MAX_DISTANCE    1000   //cm
#define SONIC_TIMEOUT   (MAX_DISTANCE*60) // calculate timeout 
#define SOUND_VELOCITY  340  //soundVelocity: 340m/s

class U_Sensor{
	public:
		U_Sensor();
		float getSonar();
};
 
 
 #endif
