//Mooving Grooving Robot

//Created by Creed Truman
//Licensed under the MIT License
//Last Updated: April 14, 2026

#include "myiolib.h"

int main(void){
  //This is where I put the code.

  myPinMode(PIN_5, OUT);
  myPinMode(PIN_6, OUT);

  initTimer2Millis();

  while(true){
    myDigitalWrite(PIN_5, ON);
    myDigitalWrite(PIN_6, OFF);
    myDelay(1000);
    myDigitalWrite(PIN_5, OFF);
    myDigitalWrite(PIN_6, ON);
    myDelay(1000);
  }
}