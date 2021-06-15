#include <WeELF328P.h>

WeDCMotor dc;
/**
 * 1 : 앞으로
 * 2 : 뒤로
 * 3 : 왼쪽으로
 * 4 : 오른쪽으로
 */

 /**
  * 조립 : 오른쪽바퀴 - M1
  *        왼쪽바퀴 -  M2
  * 
  */
  
void setup() {
    dc.move(3,100);
}

void loop() {

}
