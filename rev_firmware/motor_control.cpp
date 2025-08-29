#include "motor_control.h"

Servo panServo;
Servo tiltServo;

void initMotors() {
  panServo.attach(SERVO_PAN_PIN);
  tiltServo.attach(SERVO_TILT_PIN);
  panServo.write((PAN_MIN + PAN_MAX) / 2);
  tiltServo.write((TILT_MIN + TILT_MAX) / 2);
}

void setPan(int angle) {
  if (angle < PAN_MIN) angle = PAN_MIN;
  if (angle > PAN_MAX) angle = PAN_MAX;
  panServo.write(angle);
}

void setTilt(int angle) {
  if (angle < TILT_MIN) angle = TILT_MIN;
  if (angle > TILT_MAX) angle = TILT_MAX;
  tiltServo.write(angle);
}
