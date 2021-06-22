#include "ir_remote.h"
#include <IRremote.h>
#include "servo_mot.h"

mon_servo mot;

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
    case bouton_1:
    mot.setup();
    mot.gauche();
    break;
  }
}
