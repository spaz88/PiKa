#include "infrarouge.h"

void infrarouge::setup(){
  pinMode(PIN_IR_MILIEU, INPUT);
  pinMode(PIN_IR_DROITE, INPUT);
  pinMode(PIN_IR_GAUCHE, INPUT);
}

void infrarouge::detectionMilieu(){
  hasObstacle = digitalRead(PIN_IR_MILIEU);
  if (hasObstacle == LOW)
  {

    Serial.println("Rien");
  }
  else
  {

    Serial.println("Objet detecter");
  }
}

void infrarouge::detectionGauche(){
  hasObstacle = digitalRead(PIN_IR_GAUCHE);
  if (hasObstacle == LOW)
  {

    Serial.println("Rien");
  }
  else
  {

    Serial.println("Objet detecter");
  }
}

void infrarouge::detectionDroite(){
  hasObstacle = digitalRead(PIN_IR_DROITE);
  if (hasObstacle == LOW)
  {

    Serial.println("Rien");
  }
  else
  {

    Serial.println("Objet detecter");
  }
}
