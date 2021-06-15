  
#include "WeELF328P.h"
WeImageRecognition image(15);

void setup() 
{
    Serial.begin(9600);
    Serial.println("line follow setup 2");
    image.setLineFollowerMode(); 
}
void loop()
{
  if(image.getLineFollowerAngle()==1)
  {
      Serial.println(image.angle);      
  }
  delay(50); 
}
