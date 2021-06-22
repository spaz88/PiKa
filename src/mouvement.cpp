#include "mouvement.h"
#include "moteur.h"

moteur roue1;

void mouvement::setup(){
  if (!ads.begin()) {
    Serial.println("Failed to initialize ADS.");
    while (1);
  }
}

int mouvement::direction(){
  adc0 = ads.readADC_SingleEnded(0)/100;  //150  //avant
  adc1 = ads.readADC_SingleEnded(1)/100;         //gauche
  adc2 = ads.readADC_SingleEnded(2)/100;         //droite
  adc3 = ads.readADC_SingleEnded(3)/100;  //100
  delay(200);
  if(ads.begin()){
      if (adc0 > 150){
        Serial.println("avant");//1
        return 1;
      }
      if (adc1 > 150){
        Serial.println("gauche");//2
        roue1.tourner_droite(127);
        return 2;
      }
      if (adc2 > 150){
        Serial.println("droite");//3
        roue1.tourner_gauche(127);
        return 3;
      }
      if (adc3 > 150){
        digitalWrite(PINT_Moteur_MARCHE_TOUS, LOW);
        Serial.println("Stop");
        exit(0);
      }
      if (adc0 > 150 && adc1 > 150){
        Serial.println("avant gauche");//4
        roue1.tourner_gauche(127);
        roue1.tourner_droite(70);
        return 4;
      }
      if (adc0 > 150 && adc2 > 150){//5
        Serial.println("avant droite");
        roue1.tourner_gauche(70);
        roue1.tourner_droite(127);
        return 5;
      }
      /*else{
        Serial.println("Rien");
        return 10;
      }*/
  }



}
