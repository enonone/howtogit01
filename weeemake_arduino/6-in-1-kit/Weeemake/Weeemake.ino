#include <WeELF328P.h>

WeBuzzer buzzer(OnBoard_Buzzer);

void setup() {
  buzzer.tone(262, 500);
}

void loop() {
  
}
