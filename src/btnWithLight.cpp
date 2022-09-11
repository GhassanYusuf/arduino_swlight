#include "btnWithLight.h"

btnWithLight::btnWithLight() {

}

btnWithLight::btnWithLight(uint8_t _btn, uint8_t _led) {
	_btn_pin = _btn;
	_led_pin = _led;
}

void btnWithLight::begin() {
	pinMode(_btn_pin, INPUT_PULLUP);
	pinMode(_led_pin, OUTPUT);
}

bool btnWithLight::read() {
	return !digitalRead(_btn_pin);
}

void btnWithLight::turnOn() {
	digitalWrite(_led_pin, HIGH);
}

void btnWithLight::turnOff() {
	digitalWrite(_led_pin, LOW);
}

void btnWithLight::blink(unsigned int interval) {
	if(millis() - _btn_prv_millis >= interval) {
		digitalWrite(_led_pin, !digitalRead(_led_pin));
		_btn_prv_millis = millis();
	}
}
