#include "ultrason.h"

int ultrason::distance(){
  HCSR04 hc(ULTRASON_TRIG,ULTRASON_ECHO);
   Serial.print("Distance : ") ;
   Serial.println(hc.dist());
  return hc.dist();
  delay(200);
}
