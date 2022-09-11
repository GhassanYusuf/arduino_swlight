#ifndef _btnWithLight_h
#define _btnWithLight_h

#include "Arduino.h"
  
class btnWithLight {

 protected:
	 
	 uint8_t		_btn_pin;
	 unsigned long 	_btn_prv_millis = millis();

	 uint8_t		_led_pin;
	 unsigned long 	_led_prv_millis = millis();

 public:

	 btnWithLight();
	 btnWithLight(uint8_t _btn, uint8_t _led);
	 void begin();
	 bool read();
	 void turnOn();
	 void turnOff();
	 void blink(unsigned int interval);

};

#endif
