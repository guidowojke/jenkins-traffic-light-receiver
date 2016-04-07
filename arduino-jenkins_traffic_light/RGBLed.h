/*
 * RGBLed.h
 *
 *  Created on: 06.04.2016
 *      Author: gwojke
 */

#ifndef RGBLED_H_
#define RGBLED_H_
#include "Arduino.h"
#include "Color.h"

class RGBLed {
public:
	RGBLed(uint8_t pinRed, uint8_t pinGreen, uint8_t pinBlue);
	void setColor(const Color* c);
	virtual ~RGBLed();
private:
    Color* c;
    uint8_t pinRed;
    uint8_t pinGreen;
    uint8_t pinBlue;
};

#endif /* RGBLED_H_ */
