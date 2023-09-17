#include "Motion.h"

Motion::Motion(){
  pinMode(PIN_DIRECTION_LEFT, OUTPUT);
  pinMode(PIN_MOTOR_PWM_LEFT, OUTPUT);
  pinMode(PIN_DIRECTION_RIGHT, OUTPUT);
  pinMode(PIN_MOTOR_PWM_RIGHT, OUTPUT);
}

void Motion::setMotion(int direction, int power){

  if (direction == 1){ // forward
  speedl = -(power * 255)/100;
  speedr = -(power * 255)/100;
  	//Motion::motorRun(-(power * 255)/100, -(power * 255)/100);
  }
  else if (direction == 2){ // backwards
  speedl = (power * 255)/100;
  speedr = (power * 255)/100;
  //	Motion::motorRun((power * 255)/100, (power * 255)/100);
  }
  else if (direction == 3){ // left
  speedl = 0;
  speedr = -(power * 255)/100;
  //	Motion::motorRun(0, -(power * 255)/100);
  }
  else if (direction == 4){ // right
  speedl = -(power * 255)/100;
  speedr = 0;
  //	Motion::motorRun(-(power * 255)/100, 0);
  }
  else if (direction ==5){ // stop 
  	speedl = 0;
  	speedr = 0;
  }
  else if(direction ==6){ // sharp left turn
  	speedl = (power * 255)/100;
    speedr = -(power * 255)/100;
  }
  else if (direction ==7){ // shatp right
	speedl = -(power * 255)/100;
  	speedr = (power * 255)/100; 	
  }
}
void Motion::setCustomMotion(int powerL, int powerR){
	
  speedl = (powerL * 255)/100;
  speedr = (powerR * 255)/100;	
}

void Motion::setSharpTurn(int direction, int power){
	if(direction ==1){ // sharp left turn
	    speedl = (power * 255)/100;
        speedr = -(power * 255)/100;
	}
	else if (direction ==2){ // sharp right turn
		speedl = -(power * 255)/100;
  		speedr = (power * 255)/100;	
	}
}

  void Motion::motorRun() {
  //pinMode(PIN_DIRECTION_LEFT, OUTPUT);
  //pinMode(PIN_MOTOR_PWM_LEFT, OUTPUT);
  //pinMode(PIN_DIRECTION_RIGHT, OUTPUT);
  //pinMode(PIN_MOTOR_PWM_RIGHT, OUTPUT);
  
  int dirL = 0, dirR = 0;
  if (speedl > 0) {
    dirL = 0 ^ MOTOR_DIRECTION;
  } else {
    dirL = 1 ^ MOTOR_DIRECTION;
    speedl = -speedl;
  }

  if (speedr > 0) {
    dirR = 1 ^ MOTOR_DIRECTION;
  } else {
    dirR = 0 ^ MOTOR_DIRECTION;
    speedr = -speedr;
  }
  digitalWrite(PIN_DIRECTION_LEFT, dirL);
  digitalWrite(PIN_DIRECTION_RIGHT, dirR);
  analogWrite(PIN_MOTOR_PWM_LEFT, speedl);
  analogWrite(PIN_MOTOR_PWM_RIGHT, speedr);
}
