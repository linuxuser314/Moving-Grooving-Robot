//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"

#define METERTIME 6000
#define TURNTIME 700
int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();

	while(true){
		drive(100, 100);
		myDelay(METERTIME);
		drive(100 ,-100);
		myDelay(TURNTIME);
	}
}
