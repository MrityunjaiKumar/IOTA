/**
 * @file UART.ino
 * @author Mrityunjai Kumar (mrityunjai@sincgrid.com)
 * @brief
 * @version 0.1
 * @date 2022-09-20
 *
 * Copyright Sincgrid LLP
 *
 * Simple calculator using UART (Called as Serial in arduino environment)
 */

#include <Arduino.h>

String num1 = "";
String num2 = "";

void setup() {
  Serial.begin(115200);
  Serial.println(" SIMPLE CALACULATOR");
}
void loop() {
  //input first number
  Serial.print("Enter the first number: ");
  while (Serial.available() == 0) {
    //wait for input
  }
  num1 = Serial.readString().toInt();
  Serial.println(num1);
  // input 2nd number
  Serial.print("Enter the second number: ");
  while (Serial.available() == 0) {
  }
  num2 = Serial.readString().toInt();
  Serial.println(num2);

  //operation menu
  Serial.println("\nOperation Menu:");
  Serial.println("\t 1) Addition");
  Serial.println("\t 2)Subtraction");
  Serial.println("\t 3)Multiplication");
  Serial.println("\t 4)Division");
  Serial.println("\t 5)Modulo");
  Serial.print("Choose your operation: ");
  while (Serial.available() == 0) {
  }
  int choice = Serial.readString().toInt();
  switch (choice) {
  case 1:
    Serial.println("Addition");
    Serial.println(num1 + "+" + num2 + "=" + (num1.toInt() + num2.toInt()) + "\n");
    break;
  case 2:
    Serial.println("Subtraction");
    Serial.println(num1 + "-" + num2 + "=" + (num1.toInt() - num2.toInt()) + "\n");
    break;
  case 3:
    Serial.println("Multiplication");
    Serial.println(num1 + "X" + num2 + "=" + (num1.toInt() * num2.toInt()) + "\n");
    break;
  case 4:
    Serial.println("Division");
    Serial.println(num1 + "/" + num2 + "=" + (num1.toFloat() / num2.toFloat()) + "\n");
    break;
  case 5:
    Serial.println("Modulo");
    Serial.println(num1 + "%" + num2 + "=" + (num1.toInt() % num2.toInt()) + "\n");
    break;
  default:
    Serial.println("INVALID OPERATION");
    break;
  }
  delay(1000);
}