  
#include "WeELF328P.h"

We4LEDButton LEDButton(15);
uint8_t keyPressed = 0;

void setup()
{  
  Serial.begin(9600);
  Serial.println("setup! 2");
}
void loop() 
{
  keyPressed=LEDButton.readKey();
  if(keyPressed == 1)
  {
      Serial.println("Pressed: KEY1"); 
  }
  if (keyPressed == 2)
  {
      Serial.println("Pressed: KEY2");
  }
  if (keyPressed == 3)
  {
      Serial.println("Pressed: KEY3");
  }
  if (keyPressed == 4)
  {
      Serial.println("Pressed: KEY4");
  }
  delay(20);

}
