#include "ReleSR.h"
#include "Arduino.h"

//VARs Global
bool selo1 = false;
bool selo2 = false;


ReleSR::ReleSR(int indice){
	_indice = indice;
}

ReleSR::ReleSR(){}

void ReleSR::Set(boolean Set)
{
	_set=Set;
	if (_set == HIGH && selo1 == false && _reset == LOW) {
		Serial.println("Relay ON");
		
		CV = HIGH;
		selo1 = true;
	}
	if (_set == LOW && selo1 == true) {
		selo1 = false;
	}
}
void ReleSR::Reset(boolean Reset)
{
	_reset=Reset;
	if (_reset == HIGH && selo2 == false) {
		Serial.println("Relay OFF");
		
		CV = LOW;
		selo2 = true;
	}
	if (_reset == LOW && selo2 == true) {
		selo2 = false;
	}
}