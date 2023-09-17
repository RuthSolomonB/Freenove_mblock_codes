#include "Sound.h"

Sound::Sound(){
	pinMode(PIN_BUZZER, OUTPUT);
}
   
void Sound::MakeSound(){
	digitalWrite(PIN_BUZZER, HIGH);
}

void Sound::StopSound(){
	digitalWrite(PIN_BUZZER, LOW);
}
