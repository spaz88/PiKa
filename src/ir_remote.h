#include <IRremote.h>
#include <arduino.h>

#define PIN_IR_COMMANDE 9

#define bouton_1 FF6897
#define bouton_2 FF9867
#define bouton_3 FFB04F
#define bouton_4 FF30CF
#define bouton_5 FF18E7
#define bouton_6 FF7A85
#define bouton_7 FF10EF
#define bouton_8 FF38C7
#define bouton_9 FF5AA5
#define bouton_0 FF4AB5
#define bouton_fleche_haut FF629D
#define bouton_fleche_droite FFC23D
#define bouton_fleche_gauche FF22DD
#define bouton_fleche_bas FFA857
#define bouton_ok FF02FD
#define bouton_etoile FF42BD
#define bouton_dieze FF52AD

class remote{
public:
  void setup();
  void commande();
};
