#include "servo_mot.h"
#include <arduino.h>

ultrason son1;

void mon_servo::setup(){
  myservo.attach(PIN_SERVO_ULTRASON);
  myservo.write(90);
}

void mon_servo::droite(){
  while(myservo.read()!= 0){
    son1.distance();
  myservo.slowmove(0,20);
 }
 son1.distance();
}

void mon_servo::gauche(){
  while(myservo.read()!= 180){
  myservo.slowmove(180,20);
 }
 son1.distance();

}

void mon_servo::centre(){
  while(myservo.read()!= 90){
  myservo.slowmove(90,20);
 }
 son1.distance();
}
