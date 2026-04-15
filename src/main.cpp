//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"


int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	
	//Moving BoeBot forwards and backwards
	drive(100, 100);
	myDelay(3000);
	stop();
	myDelay(3000);
	drive(-100, -100);
	myDelay(3000);
	stop();
	myDelay(3000);
	drive(100, 100);
	myDelay(5000);
	stop();

	while(true);
}
