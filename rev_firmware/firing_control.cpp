#include "firing_control.h"

void initFiring() {
  pinMode(FIRE_PIN, OUTPUT);
  digitalWrite(FIRE_PIN, LOW);
}

void fire() {
  digitalWrite(FIRE_PIN, HIGH);
  delay(FIRE_PULSE_MS);
  digitalWrite(FIRE_PIN, LOW);
}
