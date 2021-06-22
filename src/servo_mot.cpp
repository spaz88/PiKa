#include "servo_mot.h"
#include <arduino.h>

ultrason son1;

void mon_servo::setup(){
  myservo.attach(PIN_SERVO_ULTRASON);
  myservo.write(90);
}

void mon_servo::droite(){
  for(int i = 179; i > 0; i--){
    myservo.write(i);
    son1.distance();
    delay(25);
  }
}



void mon_servo::gauche(){
  for(int i = 89; i < 180; i++){
    myservo.write(i);
    son1.distance();
    delay(25);
  }
}


void mon_servo::centre(){
  for(int i = 0; i < 90; i++){
    myservo.write(i);
    son1.distance();
    delay(25);
  }
}

void mon_servo::balayement(){

  gauche();
  droite();
  centre();
  /*for(int i = 89; i < 180; i++){
    myservo.write(i);
    son1.distance();
    delay(50);
}
for(int i = 179; i > 0; i--){
  myservo.write(i);
  son1.distance();
  delay(50);
}
for(int i = 0; i < 90; i++){
  myservo.write(i);
  son1.distance();
  delay(50);
}*/
}
