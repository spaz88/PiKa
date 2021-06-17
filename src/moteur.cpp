#include <arduino.h>
#include "moteur.h"


void moteur::setup_pin(){
  pinMode(PIN_Moteur_DROITE, OUTPUT);
  pinMode(PIN_Moteur_DR_Sens, OUTPUT);
  pinMode(PIN_Moteur_GAUCHE, OUTPUT);
  pinMode(PIN_Moteur_GA_Sens, OUTPUT);
  pinMode(PINT_Moteur_MARCHE_TOUS, OUTPUT);
  digitalWrite(PINT_Moteur_MARCHE_TOUS, LOW);
}

void moteur::recule(){
  digitalWrite(PIN_Moteur_DROITE, HIGH);
  digitalWrite(PIN_Moteur_DR_Sens, LOW);
  digitalWrite(PIN_Moteur_GAUCHE, HIGH);
  digitalWrite(PIN_Moteur_GA_Sens, LOW);
}

void moteur::tourner_droite(){
  digitalWrite(PIN_Moteur_GAUCHE, LOW);
  analogWrite(PIN_Moteur_DROITE, 100);
  digitalWrite(PIN_Moteur_DR_Sens, HIGH);
}

void moteur::tourner_gauche(){
  digitalWrite(PIN_Moteur_DROITE, LOW);
  analogWrite(PIN_Moteur_GAUCHE, 100);
  digitalWrite(PIN_Moteur_GA_Sens, HIGH);
}

void moteur::avance(){
  analogWrite(PIN_Moteur_DROITE, 100);
  digitalWrite(PIN_Moteur_DR_Sens, HIGH);
  analogWrite(PIN_Moteur_GAUCHE, 100);
  digitalWrite(PIN_Moteur_GA_Sens, HIGH);
}
