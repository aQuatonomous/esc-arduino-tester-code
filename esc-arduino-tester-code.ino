#include <Servo.h>

Servo ESC;

void setup() {
  ESC.attach(9);
  ESC.writeMicroseconds(1500); // send "stop" signal to ESC. Also necessary to arm the ESC.

  delay(7000); // delay to allow the ESC to recognize the stopped signal.
}

void loop() {


ESC.writeMicroseconds(1100); // Send signal to ESC.
}