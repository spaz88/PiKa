#include "ultrason.h"


int ultrason::distance(){
  HCSR04 hc(ULTRASON_TRIG,ULTRASON_ECHO);
  Serial.println(hc.dist());
  return hc.dist();
}
