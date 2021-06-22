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

void moteur::recule(int vitesse){
  analogWrite(PIN_Moteur_DROITE, vitesse);
  digitalWrite(PIN_Moteur_DR_Sens, LOW);
  analogWrite(PIN_Moteur_GAUCHE, vitesse);
  digitalWrite(PIN_Moteur_GA_Sens, LOW);
}

void moteur::tourner_droite(int vitesse){
  digitalWrite(PIN_Moteur_GAUCHE, LOW);
  analogWrite(PIN_Moteur_DROITE, vitesse);
  digitalWrite(PIN_Moteur_DR_Sens, HIGH);
}

void moteur::tourner_gauche(int vitesse){
  digitalWrite(PIN_Moteur_DROITE, LOW);
  analogWrite(PIN_Moteur_GAUCHE, vitesse);
  digitalWrite(PIN_Moteur_GA_Sens, HIGH);
}

void moteur::avance(int vitesse){
  analogWrite(PIN_Moteur_DROITE, vitesse);
  digitalWrite(PIN_Moteur_DR_Sens, HIGH);
  analogWrite(PIN_Moteur_GAUCHE, vitesse);
  digitalWrite(PIN_Moteur_GA_Sens, HIGH);
}

void moteur::arret(){
  digitalWrite(PINT_Moteur_MARCHE_TOUS, LOW);
}
