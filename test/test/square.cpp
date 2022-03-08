#include "square.h"
#include <math.h>


void square::calculatePoints()
{
	leftTopx = leftTop.getleftTopx();
	leftTopy = leftTop.getleftTopy();

	rightTopx = leftTopx + edge;
	rightTopy = leftTopy;
	rightBottomx = leftTopx + edge;
	rightBottomy = leftTopy + edge;
	leftBottomx = leftTopx;
	leftBottomy = leftTopy + edge;
}


square::square(int a, int b, int c)
{
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);
	edge = c;
}



void square::calculateArea()
{
	
	this->area = edge * edge;

}

void square::calculatePerimeter() {
	
	this->perimeter = edge * 4;

}

string square::toString()
{
	calculatePoints();
	calculateArea();
	calculatePerimeter();
	return "Square edge = " + to_string(edge) + "\n" + "(" + to_string(leftTopx) + ", " + to_string(leftTopy) + ") " + "\n" + "(" + to_string(rightTopx) + ", " + to_string(rightTopy) + ") " + "\n" + "(" + to_string(rightBottomx) + ", " + to_string(rightBottomy) + ") " + "\n" + "(" + to_string(leftBottomx) + ", " + to_string(leftBottomy) + ")" + "\n" + "Area = " + to_string(area) + " Perimeter = " + to_string(perimeter) + "\n";
}

void square::move(int a, int b) {
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);

}
//square only uses edge to scale as all its sides are the same length
void square::scale(double a, double b)
{
	edge = edge * a;
}