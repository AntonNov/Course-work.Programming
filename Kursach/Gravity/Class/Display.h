#pragma once
class Display
{
	int width, height, speed;
	//Scale for camera: сколько километров в 1 пикселе?
	float thousandsKilometersPixel;

public:
	Display(int width, int height, int thousandsKilometersPixel, int speed): 
		width(width),
		height(height),
		thousandsKilometersPixel(thousandsKilometersPixel),
		speed(speed)
	{
		if (thousandsKilometersPixel < 1) thousandsKilometersPixel = 1;
	}
	//getters
	int getWidth();
	int getHeight();
	float getScale();
	float getSpeed();
};