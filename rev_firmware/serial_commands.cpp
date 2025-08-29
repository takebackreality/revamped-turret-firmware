#include "serial_commands.h"

String input;

void handleSerial() {
  while (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      if (input.startsWith("PAN")) {
        int val = input.substring(3).toInt();
        setPan(val);
      } else if (input.startsWith("TILT")) {
        int val = input.substring(4).toInt();
        setTilt(val);
      } else if (input.startsWith("FIRE")) {
        fire();
      }
      input = "";
    } else {
      input += c;
    }
  }
}
