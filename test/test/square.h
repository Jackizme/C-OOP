#pragma once
#include "shape.h"
#include "moveable.h"

class square : public shape, public moveable
{
	int edge;
	int leftTopx;
	int leftTopy;
	int rightTopx;
	int rightTopy;
	int rightBottomx;
	int rightBottomy;
	int leftBottomx;
	int leftBottomy;
public:
	square(int a, int b, int c);
	string toString();
	void calculateArea();
	void calculatePoints();
	void calculatePerimeter();
	void move(int a, int b);
	void scale(double a, double b);
};