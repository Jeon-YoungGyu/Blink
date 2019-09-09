#include "Blink.h"

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT); 
}
void Blink::on(int delay)
{
  delay(delay);
  digitalWrite(pin, HIGH);
  Serial.println("high");  
}
void Blink::off(int delay)
{
  delay(delay);
  digitalWrite(pin, LOW);
  Serial.println("low");
}


