#include "config.h"
#include "motor_control.h"
#include "firing_control.h"
#include "serial_commands.h"

void setup() {
  Serial.begin(BAUD_RATE);
  initMotors();
  initFiring();
}

void loop() {
  handleSerial();
}
