/*
 * RGBLed.cpp
 *
 *  Created on: 06.04.2016
 *      Author: gwojke
 */

#include "RGBLed.h"

RGBLed::RGBLed(uint8_t pinRed, uint8_t pinGreen, uint8_t pinBlue):pinRed(pinRed),pinGreen(pinGreen),pinBlue(pinBlue) {
	// TODO Auto-generated constructor stub

}

void RGBLed::setColor(const Color* c) {
    analogWrite(pinRed, c->getRed());
    analogWrite(pinGreen, c->getGreen());
    analogWrite(pinBlue, c->getBlue());
}

RGBLed::~RGBLed() {
	// TODO Auto-generated destructor stub
}

