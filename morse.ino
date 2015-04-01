#include <morse.h>

Morse morse(13);

void setup()
{
}

void loop()
{
  morse.a(); morse.b(); morse.c();
  delay(3000);
  morse.A(); morse.B(); morse.C();
  delay(3000);
}
