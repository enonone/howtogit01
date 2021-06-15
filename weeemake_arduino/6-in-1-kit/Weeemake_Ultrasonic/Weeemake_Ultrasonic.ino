#include <WeELF328P.h>
/**
 * A 포트 : 9번
 * B 포트 : 10번
 * C 포트 : 12번
 * D 포트 : 4번
 */
WeUltrasonicSensor ultrasonic(9);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("distance : ");
  Serial.println(ultrasonic.distanceCm());
}
