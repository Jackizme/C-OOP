#pragma once
#include "shape.h"
#include "moveable.h"
#include "point.h"
class rectangle : public shape, public moveable
{
	int leftTopx;
	int leftTopy;
	int rightTopx;
	int rightTopy;
	int rightBottomx;
	int rightBottomy;
	int leftBottomx;
	int leftBottomy;
	int height;
	int width;

public:
	rectangle(int a, int b, int c, int d );
	void calculateArea();
	void calculatePoints();
	void calculatePerimeter();
	string toString();
	void move(int a, int b);
	void scale(double a, double b);
};

