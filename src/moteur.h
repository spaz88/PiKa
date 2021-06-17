#pragma once

#define PIN_Moteur_DROITE 5
#define PIN_Moteur_DR_Sens 7
#define PIN_Moteur_GAUCHE 6
#define PIN_Moteur_GA_Sens 8
#define PINT_Moteur_MARCHE_TOUS 3

class moteur{

public:
  void setup_pin();
  void avance();
  void recule();
  void tourner_droite();
  void tourner_gauche();

};