#pragma once

#include <HCSR04.h>

#define ULTRASON_TRIG 13
#define ULTRASON_ECHO 12

class ultrason{

public:
  int distance();
};
