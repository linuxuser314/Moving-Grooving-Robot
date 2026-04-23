//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 22, 2026

#include "myiolib.h"

constexpr uint8_t TONE_PIN = 2;
uint16_t melody[] = {1047, 1174, 1319, 1397, 1568, 1760, 1976, 2093};


//drive and stop were defined in myiolib.h.

void forward(uint16_t ms){
	drive(100, 100);
	myDelay(ms);
	stop();
}
void backward(uint16_t ms){
	drive(-100, -100);
	myDelay(ms);
	stop();
}
void turnLeft(uint16_t ms){
	drive(-25, 25);
	myDelay(ms);
	stop();
}
void turnRight(uint16_t ms){
	drive(25, -25);
	myDelay(ms);
	stop();
}


int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	myPinMode(PIN_2, OUT);
	
	//Initial wind-up song (C-scale) to start (3 seconds long).
	for(uint8_t i = 0; i < sizeof(melody) / sizeof(melody[0]); i++){
		myTone(melody[i], 350);
		myDelay(25);
	}
	forward(3000);
	backward(3000);
	turnLeft(3000);
	turnRight(3000);
	//stops automatically at the end of the duration

	while(true){}
}
