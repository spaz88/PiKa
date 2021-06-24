#include "servo_mot.h"
#include <arduino.h>
#include "ultrason.h"

ultrason son1;

void mon_servo::setup(){
  myservo.attach(PIN_SERVO_ULTRASON);
  myservo.write(90);
}

void mon_servo::droite(){
  for(int i = 179; i > 0; i--){
    if (son1.distance() > 21){
    myservo.write(i);
    }
    else{
      break;
    }
    delay(25);
  }
}



void mon_servo::gauche(){
  for(int i = 90; i > 179; i++){
    if (son1.distance() > 21){
    myservo.write(i);
    }
    else{
      break;
    }
    delay(25);
  }
}


void mon_servo::centre(){
    myservo.slowmove(90, 25);
}
