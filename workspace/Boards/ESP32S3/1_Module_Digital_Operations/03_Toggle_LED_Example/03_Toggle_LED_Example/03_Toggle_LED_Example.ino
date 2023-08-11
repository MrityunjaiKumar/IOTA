
/**
 * @file 01_DigitalWrite_Example.ino
 * @author Mrityunjai Kumar (mrityunjai@sincgrid.com)
 * @brief
 * @version 0.1
 * @date 2022-09-20
 *
 * Copyright Sincgrid LLP
 *
 * Problem statement:- Toggle led when button is pressed
 *
 */

#include <Arduino.h>

#define LED_PIN 4
#define BUTTON_PIN 5
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}


bool ledState = false;

void loop() {
  // put your main code here, to run repeatedly:

  if (!digitalRead(BUTTON_PIN)) {
    ledState = !ledState;
    delay(300);
  }

  if (ledState) {
    digitalWrite(LED_PIN, HIGH);

  } else {
    digitalWrite(LED_PIN, LOW);
  }
}