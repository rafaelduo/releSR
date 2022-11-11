/*
	name=releSR
	version=1.0.0
	license=FREE
	author=Rafael Guerreiro <rafael@duo.eng.br>
	maintainer=Rafael Guerreiro <rafael@duo.eng.br>
	sentence=Simulates a relay set/reset (Logica Ladder for Logica C++).
	paragraph=The ReleSR library.
	category=Variable Manipulation
	url=https://github.com/rafaelDUO/releSR
	repository=https://github.com/rafaelDUO/releSR.git
	architectures=*

  *** Example for activating a relay via digital inputs ***
*/

#include <releSR.h>

releSR RL1;

const int b1 = 13;
const int b2 = 14;
const int led = 5;

void setup() {
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  RL1.set(digitalRead(b1));
  RL1.reset(digitalRead(b2));
  digitalWrite(led, RL1.CV);
}