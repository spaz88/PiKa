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
  move.direction();

}
