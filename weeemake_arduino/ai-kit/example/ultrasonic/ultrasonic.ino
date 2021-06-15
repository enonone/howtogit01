  
#include "WeELF328P.h"

WeUltrasonicSensor ultrasonic_15(15);

void setup()
{  
  Serial.begin(9600);
  Serial.println("setup 1");
  ultrasonic_15.setColor(3, 100,100,100);
}
void loop() 
{

  Serial.print("Distance : ");
  Serial.print(ultrasonic_15.distanceCm() );
  Serial.println(" cm");
  delay(100);
}
