#include "ir_remote.h"
#include <IRremote.h>
#include "servo_mot.h"
#include "moteur.h"

mon_servo mot;
moteur moteur1;

IRrecv receiver(PIN_IR_COMMANDE);
decode_results results;

void remote::setup(){
  receiver.enableIRIn();
}

void remote::commande(){
  if (receiver.decode(&results)) {
    Serial.println(results.value);
    receiver.resume();
  }
  switch(results.value){
    case bouton_fleche_haut:
    moteur1.avance(75);
    break;

    case bouton_fleche_droite:
    moteur1.tourner_droite(75); //inverser droite et gauche
    break;

    case bouton_fleche_gauche:
    moteur1.tourner_gauche(75);
    break;

    case bouton_fleche_bas:
    moteur1.recule(127);
    break;

    case bouton_ok:
    digitalWrite(PINT_Moteur_MARCHE_TOUS, HIGH);
    break;

    case bouton_1:
    moteur1.arret();
    break;

  }
}
