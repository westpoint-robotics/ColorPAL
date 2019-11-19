#include <ColorPAL.h>

ColorPAL colors;

void setup()
{
  colors.attachPAL(12);              // Attaches sensor to digital pin 12
  Serial.begin(9600);
}

void loop()
{
  int red = colors.redPAL();            // Reads sensors and returns red value
  int green = colors.greenPAL();        // Reads sensors and returns green value
  int blue = colors.bluePAL();          // Reads sensors and returns blue value
  Serial.print(red); Serial.print(" ");
  Serial.print(green); Serial.print(" ");
  Serial.println(blue);
}
