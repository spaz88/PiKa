#pragma once

#include <Adafruit_ADS1X15.h>
#include <SPI.h>

class mouvement{
    public:
        void setup();
        int direction();
        void detectionChoc();
        int adc0, adc1, adc2, adc3;
        Adafruit_ADS1115 ads;
};
