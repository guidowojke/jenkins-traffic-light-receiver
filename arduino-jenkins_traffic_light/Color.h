/*
 * Color.h
 *
 *  Created on: 06.04.2016
 *      Author: gwojke
 */

#ifndef COLOR_H_
#define COLOR_H_

#include "Arduino.h"

class Color {
public:
	Color(){};
	Color(uint8_t red, uint8_t green, uint8_t blue);
	uint8_t getRed() const {return red;}
	uint8_t getBlue() const {return blue;}
	uint8_t getGreen() const {return green;}
	void setRed(uint8_t red) {this->red = red;}
	void setGreen(uint8_t green) {this->green = green;}
	void setBlue(uint8_t blue) {this->blue = blue;}
	virtual ~Color();
private:
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

#endif /* COLOR_H_ */
