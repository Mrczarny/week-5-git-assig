#include <Arduino.h>

// ruleset test
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// This program calculates the sum for 2 numbers.
int Sum(int x, int y) {
  return x + y;
}