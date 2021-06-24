#include "mouvement.h"
#include "moteur.h"
#include "ultrason.h"
#include "servo_mot.h"

moteur roue1;
ultrason ultra;
mon_servo servomot;

void mouvement::setup(){
  if (!ads.begin()) {
    Serial.println("Failed to initialize ADS.");
    while (1);
  }
}

int mouvement::direction(){
  adc0 = ads.readADC_SingleEnded(0);  //150  //avant
  adc1 = ads.readADC_SingleEnded(1);         //gauche
  adc2 = ads.readADC_SingleEnded(2);         //droite
  adc3 = ads.readADC_SingleEnded(3);  //100
  delay(200);
  Serial.println(adc0);
  Serial.println(adc1);
  Serial.println(adc2);
  Serial.println(adc3);

  if(ads.begin()){
      if (adc0 > 0){
        Serial.println("avant");//1
        roue1.avance(70);
        delay(500);
        return 1;
      }
      if (adc1 > 0){
        Serial.println("gauche");//2
        roue1.tourner_droite(127);
        delay(500);
        roue1.avance(75);
        return 2;
      }
      if (adc2 > 0){
        Serial.println("droite");//3
        roue1.tourner_gauche(127);
        delay(500);
        roue1.avance(75);
        return 3;
      }
      if (adc3 > 10000){
        digitalWrite(PINT_Moteur_MARCHE_TOUS, LOW);
        Serial.println("Stop");
        exit(0);
      }
      if (adc0 > 0 && adc1 > 0){
        Serial.println("avant gauche");//4
        roue1.tourner_gauche(127);
        roue1.tourner_droite(70);
        delay(500);
        roue1.avance(75);
        return 4;
      }
      if (adc0 > 0 && adc2 > 0){//5
        Serial.println("avant droite");
        roue1.tourner_gauche(70);
        roue1.tourner_droite(127);
        delay(500);
        roue1.avance(75);
        return 5;
      }
      if(ultra.distance() < 30){
        servomot.centre();
        if(ultra.distance() > 30){
          roue1.demi_tour();
          delay(2500);
        }
        if (ultra.distance() < 30) {
          servomot.gauche();
        }
        if(ultra.distance() > 30){
          roue1.demi_tour();
          delay(2500);
        }
        if (ultra.distance() < 30) {
          servomot.droite();
        }
        if(ultra.distance() > 30){
          roue1.demi_tour();
          delay(2500);
        }
    }
  }



}
