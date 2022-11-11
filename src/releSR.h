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
*/

#ifndef releSR_h
#define releSR_h
#include "arduino.h"

class releSR
{
	public:
		releSR(int indice);
		releSR();
		void set(boolean set);
		void reset(boolean reset);
		boolean _set;
		boolean _reset;
		boolean CV;
	
	private:
		int _indice;
};
#endif