
#pragma once
#include <VarSpeedServo.h>
#include "ultrason.h"
#define PIN_SERVO_ULTRASON 10


class mon_servo{

public:
  void setup();
  void droite();
  void gauche();
  void centre();
  void balayement();
  VarSpeedServo myservo;
};
