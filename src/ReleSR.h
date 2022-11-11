/*
	name=ReleSR
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

#ifndef ReleSR_h
#define ReleSR_h
#include "arduino.h"

class ReleSR
{
	public:
		ReleSR(int indice);
		ReleSR();
		void Set(boolean Set);
		void Reset(boolean Reset);
		boolean _set;
		boolean _reset;
		boolean CV;
	
	private:
		int _indice;
};
#endif