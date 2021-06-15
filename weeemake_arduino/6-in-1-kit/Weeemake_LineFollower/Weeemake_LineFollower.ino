#include <WeELF328P.h>
/**
 * A 포트 : 9번
 * B 포트 : 10번
 * C 포트 : 12번
 * D 포트 : 4번
 */
WeLineFollower linefollower(10);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("left : ");
  Serial.print(linefollower.startRead(1));
  Serial.print(" right : ");
  Serial.println(linefollower.startRead(2));
}
