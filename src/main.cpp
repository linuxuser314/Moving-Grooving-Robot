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

	while(myMillis() < 1000){
		if((TCNT2 * 4 + myMillis()) % 2272 < 1136){
			myDigitalWrite(PIN_2, ON);
		}
		else{
			myDigitalWrite(PIN_2, OFF);
		}
		myDigitalWrite(PIN_2, ON);
	}
	while(true){
	}
}
