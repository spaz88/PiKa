#pragma once

#include <arduino.h>

#define PIN_IR_MILIEU A2
#define PIN_IR_GAUCHE A1
#define PIN_IR_DROITE A0

class infrarouge{

public:
  void setup();
  void detectionMilieu();
  void detectionGauche();
  void detectionDroite();
  void detection_sol();
  void suivi_ligne();
  int hasObstacle;
};
