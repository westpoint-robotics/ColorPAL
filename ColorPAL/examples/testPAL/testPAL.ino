#include <ColorPAL.h>

ColorPAL colors;
int red, green, blue;

void setup()
{
  colors.attachPAL(6);              // Attaches sensor to digital pin 6
}

void loop()
{
  red = colors.redPAL();            // Reads sensors and returns red value
  green = colors.greenPAL();        // Reads sensors and returns green value
  blue = colors.bluePAL();          // Reads sensors and returns blue value
  Serial.print(red); Serial.print(" ");
  Serial.print(green); Serial.print(" ");
  Serial.println(blue);
}
