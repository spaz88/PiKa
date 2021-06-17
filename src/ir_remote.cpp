#include "ir_remote.h"
#include <IRremote.h>

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
}
