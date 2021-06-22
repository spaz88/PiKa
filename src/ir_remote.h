#include <IRremote.h>
#include <arduino.h>

#define PIN_IR_COMMANDE 9

#define bouton_1 16738455
#define bouton_2 16750695
#define bouton_3 16756815
#define bouton_4 16724175
#define bouton_5 16718055
#define bouton_6 16743045
#define bouton_7 16716015
#define bouton_8 16726215
#define bouton_9 16734885
#define bouton_0 16730805
#define bouton_fleche_haut 16736925
#define bouton_fleche_droite 16761405
#define bouton_fleche_gauche 16720605
#define bouton_fleche_bas 16754775
#define bouton_ok 16712445
#define bouton_etoile 16728765
#define bouton_dieze 16732845

class remote{
public:
  void setup();
  void commande();
};
