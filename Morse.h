
int pin = 13

/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
  delay(250)
}

void dash()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(250);
}

switch (char) {
    case 'a': dot(); dash();
      break;
    case 'b': dash(); dot(); dot(); dot();
      break;
    case 'c': dash(); dot(); dash(); dot();
      break;
    case 'd': dash(); dot(); dot();
      break;
    case 'e': dot();
       break;
    case 'f': dot(); dot(); dash(); dot();
      break;
    case 'g': dash(); dash(); dot();
      break;
    case 'h': dot(); dot(); dot(); dot(); 
      break;
    case 'i': dot(); dot();
       break;
    case 'j': dot(); dash(); dash(); dash();
      break;
    case 'k': dash(); dot(); dash();
      break;
    case 'l': dot(); dash(); dot(); dot();
      break;
    case 'm': dash(); dash();
      break;
    case 'n': dash(); dot();
      break;
    case 'o': dash(); dash(); dash();
      break;
    case 'p': dot(); dash(); dash(); dot();
      break;
    case 'q': dash(); dash(); dot(); dash();
      break;
    case 'r': dot(); dash(); dot();
      break;
    case 's': dot(); dot(); dot();
      break;
    case 't': dash();
      break;
    case 'u': dot(); dot(); dash();
      break;
    case 'v': dot(); dot(); dot(); dash();
       break;
    case 'w': dot(); dash(); dash();
      break;
    case 'x': dash(); dot(); dot(); dash();
      break;
    case 'y': dash(); dot(); dash(); dash();
      break;
    case 'z': dash(); dash(); dot(); dot();
      break; 
    default: 
      // if nothing else matches, do the default
      // default is optional
  }
