/*
ColorPAL
This is a library to provide a serial communication interface with the ColorPAL sensor.

The Circuit:
	+5v and Gound from Arduino to sensor
	Sensor Signal pin connected to any digital pin defined by the user.

By Pratheek Manjunath. November 19, 2019.
*/
#include "ColorPAL.h"

void ColorPAL::attachPAL(int userPin)
{
  pin = userPin;
  serin = SoftwareSerial(pin, 255);
  serout = SoftwareSerial(255, pin);
  delay(1000);                    	// Soft start required for ColorPAL
  resetPAL();                     	// Send reset to ColorPal
  serout.begin(4800);           	// Open serial port for Arduino to transmit to ColorPAL
  pinMode(pin, OUTPUT);
  serout.print("=(00 $ m)!");     	// Loop print values, see ColorPAL documentation
  serout.end();                   	// Discontinue serial port for transmitting
  pinMode(pin, INPUT);
}

void ColorPAL::readPAL(int* r, int* g, int* b)
{				
 serin.begin(4800);            	// Open serial port for Arduino to receive from ColorPAL
 delay(5);
 char buffer[32];
  if (serin.available() > 0)
  {
    // Wait for a $ character, then read three 3 digit hex numbers
    buffer[0] = serin.read();
    if (buffer[0] == '$')
    {
      for (int i = 0; i < 9; i++)
      {
        while (serin.available() == 0);       // Wait for next input character
        buffer[i] = serin.read();
        if (buffer[i] == '$')                 // Return early if $ character encountered
          return;
      }
      sscanf(buffer, "%3x%3x%3x", &red, &green, &blue);     // Parse the string in buffer for R, G, and B values
      *r=red; *g=green; *b=blue;
    }
  }
  serin.end();
}

int ColorPAL::redPAL()
{
	readPAL(&red, &green, &blue);
	return red;
}

int ColorPAL::greenPAL()
{
	readPAL(&red, &green, &blue);
	return green;
}

int ColorPAL::bluePAL()
{
	readPAL(&red, &green, &blue);
	return blue;
}

char ColorPAL::detectPAL(int a, int b, int c)
{				
  if (a > b && a > c)
    return 'r';
  else if (b > a && b > c)
    return 'g';
  else if (c > a && c > b)
    return 'b';
  else return 'w';
}

void ColorPAL::resetPAL()
{
  delay(200);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  while (digitalRead(pin) != HIGH);
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);
  delay(80);
  pinMode(pin, INPUT);
  delay(200);
}
