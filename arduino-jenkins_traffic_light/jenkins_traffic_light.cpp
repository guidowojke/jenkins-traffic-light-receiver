// Do not remove the include below
#include "jenkins_traffic_light.h"
#include "RGBLed.h"
#include "ColorInterpolator.h"

	const Color red(255,0,0);
	const Color orange(255,100,0);
    const Color yellow(255,255,0);
    const Color white(255,255,255);
    const Color black(0,0,0);
    const Color blue(0,0,255);
    ColorInterpolator building;
    RGBLed rgbLed01(9, 10, 11);

//The setup function is called once at startup of the sketch
void setup()
{
	// PINs for analogWrite: pins 3, 5, 6, 9, 10, and 11

	rgbLed01.setColor(&white);

	building.setStartColor(&red);
	building.setEndColor(&orange);
	building.setSteps(256);
	building.initColorInterpolation();
}

// The loop function is called in an endless loop
void loop()
{
	delay(10);
	Color* nextColor = building.nextColor();
	rgbLed01.setColor(nextColor);

//Add your repeated code here
}
