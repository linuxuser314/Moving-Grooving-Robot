//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"


int main(void){

	initTimer2Millis();
	initTimer1Servo50Hz();
	initSerial9600();
	while(true){
		serialPrintChar((char)(65 + myMillis() % 26));
	}
}
