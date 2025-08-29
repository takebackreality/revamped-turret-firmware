#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>
#include <Servo.h>
#include "config.h"

void initMotors();
void setPan(int angle);
void setTilt(int angle);

#endif
