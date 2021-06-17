#include <Adafruit_ADS1X15.h>
#include <SPI.h>
#include "moteur.h"
#include <arduino.h>
#include "mouvement.h"
#include "ultrason.h"
#include "servo_mot.h"
#include "infrarouge.h"
#include "ir_remote.h"

mouvement move;
moteur roue;
ultrason son;
mon_servo servo;
infrarouge infra;
remote remote;

void setup(void)
{
  remote.setup();
  infra.setup();
  servo.setup();
  roue.setup_pin();
  move.setup();
  Serial.begin(115200);
}


void loop(void){
  remote.commande();
  /*digitalWrite(PINT_Moteur_MARCHE_TOUS, HIGH);
  roue.avance();
  delay(200);
  move.direction();
  if(move.direction() == 2){
    roue.tourner_droite();
  }
  if(move.direction() == 3){
    roue.tourner_gauche();
  }
  if(move.direction() == 4){
    roue.tourner_droite();
  }
  if(move.direction() == 3){
    roue.tourner_gauche();
  }*/



}
