
#include "Line_Follow.h"


Line_Follow::Line_Follow(){
	
}

int Line_Follow::getTrackingSensorVal(int pos) {
  pinMode(PIN_TRACKING_LEFT, INPUT);
  pinMode(PIN_TRACKING_RIGHT, INPUT);
  pinMode(PIN_TRACKING_CENTER, INPUT);
  
  int trackingSensorVal = 0;
  
  if (pos==1)
  return (digitalRead(PIN_TRACKING_CENTER) == 1 ? 1 : 0);

  else if(pos==2)
  return (digitalRead(PIN_TRACKING_LEFT) == 1 ? 1 : 0);

  else if(pos==3)
  return (digitalRead(PIN_TRACKING_RIGHT) == 1 ? 1 : 0);
}
