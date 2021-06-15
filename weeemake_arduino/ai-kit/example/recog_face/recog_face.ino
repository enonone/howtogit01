#include "WeELF328P.h"
WeImageRecognition image(15);

void setup() 
{
    Serial.begin(9600);
    Serial.println("recog face setup 1");
}
uint8_t num=0;
void loop()
{ 
    if(image.getFacePositon()==1)
  {
    Serial.print(image.centerX);
    Serial.print('-');
    Serial.println(image.centerY);
  }
  delay(20); 
}
