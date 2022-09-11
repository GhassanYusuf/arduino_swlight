#include "btnWithLight.h"

#define	_button_pin		2
#define	_light_pin		13

btnWithLight player_one(_button_pin, _light_pin);

void setup() {
	player_one.begin(); // inicializes the pin
}

void loop() {
	player_one.turnOff(); // turns LED off
	delay(1000);
	player_one.turnOn();  // turns LED on
	delay(1000);
	while(1) {
		player_one.blink(250);
		bool buttonState = player_one.read(); // returns a bool, true = pressed, false = released
		if(buttonState == true) {
			break;
		}
	}
}