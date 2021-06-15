#include "WeELF328P.h"
WeImageRecognition image(15);

void setup() 
{
    Serial.begin(9600);
    Serial.println("setup 1");
    image.fastMode(true);
}
void loop()
{
  // red:1, yello:2, 
  if(image.getColorPosition(1)==1) 
  {
    Serial.print("r:");
    Serial.print(image.centerX);
    Serial.print('-');
    Serial.print(image.centerY);
    Serial.print('-');
    Serial.println(image.pixels);
    delay(100);
  }

  if(image.getColorPosition(2)==1) 
  {
    Serial.print("y:");
    Serial.print(image.centerX);
    Serial.print('-');
    Serial.print(image.centerY);
    Serial.print('-');
    Serial.println(image.pixels);
    delay(100);
  }
}
