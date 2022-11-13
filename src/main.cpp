/*
  SerialHelloWorld
  Sends Hello world and the users name over serial at a baud rate of 9600
  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/AnalogReadSerial
*/

#include "Arduino.h"                                        //Only part of platform io different from arduino ide



// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);                                 // initialize serial communication at 9600 bits per second:
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("Hello World from Eric Pazder");     // Print out required information 
  Serial.println("Hello World from your name here");     // Print out required information 
  delay(10);                                          // delay in between reads for stability
}