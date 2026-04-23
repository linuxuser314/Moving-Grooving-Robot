//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"

constexpr uint8_t TONE_PIN = 2;

#define METERTIME 6000
#define TURNTIME 700
int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	myPinMode(PIN_2, OUT);

	myTone(1047, 500);
	myTone(1147, 500);
	myTone(1319, 500);
	myTone(1397, 500);
	myTone(1568, 500);
	myTone(1760, 500);
	myTone(1976, 500);
	myTone(2093, 500);
	while(true){
	}
}
