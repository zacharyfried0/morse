
int pin = 13

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
    case 'A': dot(); dash();
      break;
    case 'B': dash(); dot(); dot(); dot();
      break;
    case 'C': dash(); dot(); dash(); dot();
      break;
    case 'D': dash(); dot(); dot();
      break;
    case 'E': dot();
       break;
    case 'F': dot(); dot(); dash(); dot();
      break;
    case 'G': dash(); dash(); dot();
      break;
    case 'H': dot(); dot(); dot(); dot(); 
      break;
    case 'I': dot(); dot();
       break;
    case 'J': dot(); dash(); dash(); dash();
      break;
    case 'K': dash(); dot(); dash();
      break;
    case 'L': dot(); dash(); dot(); dot();
      break;
    case 'M': dash(); dash();
      break;
    case 'N': dash(); dot();
      break;
    case 'O': dash(); dash(); dash();
      break;
    case 'P': dot(); dash(); dash(); dot();
      break;
    case 'Q': dash(); dash(); dot(); dash();
      break;
    case 'R': dot(); dash(); dot();
      break;
    case 'S': dot(); dot(); dot();
      break;
    case 'T': dash();
      break;
    case 'U': dot(); dot(); dash();
      break;
    case 'V': dot(); dot(); dot(); dash();
       break;
    case 'W': dot(); dash(); dash();
      break;
    case 'X': dash(); dot(); dot(); dash();
      break;
    case 'Y': dash(); dot(); dash(); dash();
      break;
    case 'Z': dash(); dash(); dot(); dot();
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
  }
