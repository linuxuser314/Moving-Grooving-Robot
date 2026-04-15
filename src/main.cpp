//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"

void testDrive(int l, int r){
	drive(l, r);
	myDelay(1000);
	drive(1500, 1500);
	myDelay(5000);
	drive(l, r);
	myDelay(1000);
	drive(1500, 1500);
	myDelay(5000);
	drive(l, r);
	myDelay(1000);
	drive(1500, 1500);
	myDelay(5000);
}
int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	testDrive(1700, 1300);
	testDrive(1300, 1700);
	testDrive(1700, 1700);
	testDrive(1300, 1300);
	while(true);
}
