//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"


int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	
	//Turning motors clockwise and counterclockwise.
	//Above 1500 is counter-clockwise, below 1500 is clockwise, and 1500 is stopped.
	//The first argument is the left motor (Pin 9, equivalent to pin 13) and the second argument is the right motor (Pin 10, equivalent to pin 12).
	millisDrive(1700, 1300);
	myDelay(4000);
	millisDrive(1700, 1700);
	myDelay(2000);
	millisDrive(1300, 1300);
	myDelay(2000);
	millisDrive(1300, 1700);
	myDelay(4000);
	stop();
	while(true);
}
