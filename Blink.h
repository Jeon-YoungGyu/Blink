#define Blink.h
#include "Arduino.h"

class Blink
{
  private:
    int pin;
    int delay;
  public:
    Blink(int pin);
    void on(int delay);
    void off(int delay);
};


