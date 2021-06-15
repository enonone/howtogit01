  
#include "WeELF328P.h"

WeGestureSensor GestureSensor(19);

void setup()
{  
  Serial.begin(9600);
  Serial.println("setup 2");
}
void loop() 
{   
  uint8_t value=GestureSensor.read();
  switch(value)
  {
     case 1: Serial.println("Right"); break;
     case 3: Serial.println("Forward"); break;
     case 2: Serial.println("Left"); break;
     case 4: Serial.println("Back"); break;
     case 5: Serial.println("Down"); break;
   }
  delay(100);
}
