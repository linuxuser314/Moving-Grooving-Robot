//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 22, 2026

#include "myiolib.h"

constexpr uint8_t TONE_PIN = 2;
uint16_t melody[] = {1047, 1174, 1319, 1397, 1568, 1760, 1976, 2093};

int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	myPinMode(PIN_2, OUT);
	
	//Initial wind-up song (C-scale) to start (3 seconds long).
	for(uint8_t i = 0; i < sizeof(melody) / sizeof(melody[0]); i++){
		myTone(melody[i], 350);
		myDelay(25);
	}
	drive(100, 100);
	myDelay(6000);
	stop();
	myDelay(2000);
	drive(-25, 25);
	myDelay(1000);
	drive(25, -25);
	myDelay(1000);
	drive(-100, -100);
	myDelay(6000);
	stop();

	while(true){}
}
