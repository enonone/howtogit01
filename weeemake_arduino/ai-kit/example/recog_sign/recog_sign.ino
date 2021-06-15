#include "WeELF328P.h"
WeImageRecognition image(15);

void setup() 
{
    Serial.begin(9600);
    Serial.println("recog signs setup 2");
}
uint8_t num=0;
void loop()
{ 
  num=image.getTrafficSigns();
  switch(num)
  {
      case 1:  Serial.println("Forward");break;
      case 2:  Serial.println("Turn back");break;
      case 3:  Serial.println("Left");break;
      case 4:  Serial.println("Right");break;
      case 5:  Serial.println("Park");break;
   }
}
