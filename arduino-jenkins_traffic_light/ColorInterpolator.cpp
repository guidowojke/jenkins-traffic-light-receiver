/*
 * ColorInterpolator.cpp
 *
 *  Created on: 06.04.2016
 *      Author: gwojke
 */

#include "ColorInterpolator.h"

ColorInterpolator::ColorInterpolator() {
	// TODO Auto-generated constructor stub

}

ColorInterpolator::~ColorInterpolator() {
	// TODO Auto-generated destructor stub
}

void ColorInterpolator::initColorInterpolation() {

	currentRed = (float) startColor->getRed();
	currentGreen = (float) startColor->getGreen();
	currentBlue = (float) startColor->getBlue();
	redStep = (float)(endColor->getRed() -startColor->getRed()) / steps;
	greenStep = (float)(endColor->getGreen() -startColor->getGreen()) / steps;
	blueStep = (float)(endColor->getBlue() -startColor->getBlue()) / steps;
}

Color* ColorInterpolator::nextColor() {
	currentRed += redStep;
	currentGreen += greenStep;
	currentBlue += blueStep;
	currentColor.setRed(currentRed);
	currentColor.setGreen(currentGreen);
	currentColor.setBlue(currentBlue);
	return &currentColor;
}

