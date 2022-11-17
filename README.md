[![releSR](https://github.com/rafaelduo/releSR)


# Updates

Library for Simulates a relay set/reset (Logica Ladder for Logica C++).

Updates:

R01 - 11/11/2022 - Changes to input variables;

R00 - 10/11/2022 - Initial release;


## Description

This library in C++ is used to simulate in C/C++ languages the function of the "Relay Set/Reset" block usually seen in Ladder languages of industrial PLCs.

It can be used in microcontrollers that use the C/C++ language, such as Arduino, ESP8266, ESP32, etc.

### Usage

The relay is activated after a rising edge of the variable used in the .Set(*var bool) call, the block output remains true until it receives a rising edge pulse in the .Reset(*var bool) call.

The .Reset function has priority over the .Set function, that is, even if the .Set function is receiving a var set to TRUE, the moment the .Reset() function receives a FALSE value,
the block output will become FALSE and it will only return to TRUE after the variable in the .Set function has a status change from false to true again.


### Constructor

#include <ReleSR.h>

ReleSR RL1;

ReleSR RL2;

### Relay activation

RL1.Set(*var bool);

RL2.Set(*var bool);

### Relay deactivation

RL1.Reset(*var bool);

RL2.Reset(*var bool);

### Examples for using the ReleSR Block Output

digitalWrite(*pin_out, RL1.CV);

digitalWrite(*pin_out, RL2.CV);

or

if (RL1.CV){

	You code if true;
}

else{

	Your code if false;
	
}

if (RL2.CV){

	You code if true;
	
}

else{

	//Your code if false;
	
}


## Operation

See examples One_releSR or Multiples_releSR in the folder included in the library