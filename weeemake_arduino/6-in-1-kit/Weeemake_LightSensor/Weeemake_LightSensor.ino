#include <WeELF328P.h>

void setup() {
  Serial.begin(9600);
  pinMode(14,INPUT);
}

void loop() {
  Serial.print("Light : ");
  Serial.println(analogRead(14));
}
