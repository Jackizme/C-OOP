#include "circle.h"
#include <cmath>

circle::circle(int a, int b, int c)
{
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);
	radius = c;
}

void circle::calculatePoints(){
	leftTopx = leftTop.getleftTopx();
	leftTopy = leftTop.getleftTopy();

	rightBottomx = (leftTopx + 2) * radius;
	rightBottomy = (leftTopy + 2) * radius;
}


void circle::calculateArea()
{
	this-> area = 3.14 * radius * radius;
}

void circle::calculatePerimeter() {
	this-> perimeter = 2 * 3.14 * radius;
}

string circle::toString()
{

	calculatePoints();
	calculateArea();
	calculatePerimeter();

	return "Circle radius = " + to_string(radius) + "\n" + " (" + to_string(leftTopx) + ", " + to_string(leftTopy) + ")" + "\n" + "(" + to_string(rightBottomx) + ", " + to_string(rightBottomy) + ") " + "\n" + "area = " + to_string(area) + "\n" + "perimeter = " + to_string(perimeter) + "\n";
}

void circle::move(int a, int b) {
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);

}
//circle uses radius to scale as area depends on the radius
void circle::scale(double a, double b)
{
	radius = radius * a ;

}
