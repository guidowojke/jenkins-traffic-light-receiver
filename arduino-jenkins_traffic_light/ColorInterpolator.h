/*
 * ColorInterpolator.h
 *
 *  Created on: 06.04.2016
 *      Author: gwojke
 */

#ifndef COLORINTERPOLATOR_H_
#define COLORINTERPOLATOR_H_
#include "Color.h"

class ColorInterpolator {
public:
	ColorInterpolator();
	void setStartColor(const Color* startColor){this->startColor = startColor;}
	void setEndColor(const Color* endColor){this->endColor = endColor;}
	void setSteps(uint16_t steps) {this->steps = steps; }
	void initColorInterpolation();
	Color* nextColor();
	virtual ~ColorInterpolator();
private:
	const Color* startColor;
	const Color* endColor;
	Color currentColor;
	uint16_t steps;
	float currentRed;
	float currentGreen;
	float currentBlue;
    float redStep;
    float greenStep;
    float blueStep;
};

#endif /* COLORINTERPOLATOR_H_ */
