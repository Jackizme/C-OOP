#pragma once
#include "shape.h"
#include "moveable.h"
#include "point.h"

class circle: public shape, public moveable
{

	int leftTopx;
	int leftTopy;
	int rightBottomx;
	int rightBottomy;
	double radius;
	bool isCircular = true;
public:
	circle(int a, int b, int c);

	void calculateArea();
	void calculatePoints();
	void calculatePerimeter();
	string toString();
	void move(int a, int b);
	void scale(double a, double b);
};

