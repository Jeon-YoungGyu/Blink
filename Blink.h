#define Blink.h
#include "Arduino.h"

class Blink
{
  private:
    int pin;
    int delay;
  public:
    Blink(int pin);
    void on(int pin);
    void off(int pin);
};


