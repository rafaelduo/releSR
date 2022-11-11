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

  *** Example for activating multiples relay's via digital inputs ***
*/

#include <releSR.h>

releSR RL1;
releSR RL2;
releSR RL3;

const int b1 = 13;
const int b2 = 14;
const int led1 = 5;

const int b3 = 16;
const int b4 = 17;
const int led2 = 21;

const int b5 = 33;
const int b6 = 34;
const int led3 = 22;

void setup() {
  Serial.begin(115200);
  
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(b5, INPUT);
  pinMode(b6, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {

  RL1.set(digitalRead(b1));
  RL1.reset(digitalRead(b2));
  digitalWrite(led1, RL1.CV);

  RL2.set(digitalRead(b3));
  RL2.reset(digitalRead(b4));
  digitalWrite(led2, RL2.CV);

  RL3.set(digitalRead(b5));
  RL3.reset(digitalRead(b6));
  digitalWrite(led3, RL3.CV);

  delay(1);
}