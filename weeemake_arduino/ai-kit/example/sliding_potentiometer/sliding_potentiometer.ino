#include "WeELF328P.h"

WeSlidingPotentiometer SlidingPotentiometer(19);

void setup()
{  
  Serial.begin(9600);
  Serial.println("setup 1");
}
void loop() 
{
  Serial.print("Analog Value is: ");
  Serial.println(SlidingPotentiometer.readAnalog()); // 0~255
  delay(100);
}
