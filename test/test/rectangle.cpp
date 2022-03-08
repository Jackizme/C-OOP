#include "rectangle.h"
#include "point.h"
#include "shape.h"
using namespace std;
#include <iostream>
#include <iomanip>





//This is the constructor for rectangle
rectangle::rectangle(int a, int b, int c, int d )
{
	height = c;
	width = d;
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);

}


//this method calculates the points of the rectangle by adding height and width to the left top coorinates
void rectangle::calculatePoints()
{

	leftTopx = leftTop.getleftTopx();
	leftTopy = leftTop.getleftTopy();


	rightTopx = leftTopx + width;
	rightTopy = leftTopy;
	rightBottomx = leftTopx + width;
	rightBottomy = leftTopy + height;
	leftBottomx = leftTopx;
	leftBottomy = leftTopy + width;


}
void rectangle::calculatePerimeter()
{
	this ->perimeter = (width * 2 + height * 2);
}
void rectangle::calculateArea() {



	this->area = width* height ;
}
//toString calls all the methods and outputs them to be able to be seen by the user
string rectangle::toString() {
	calculatePoints();
	calculateArea();
	calculatePerimeter();
	return "Rectangle [h= " + to_string(height) + ", w= " + to_string(width) + "] " + "\n" + "(" + to_string(leftTopx) + ", " + to_string(leftTopy) + ") " + "\n" + "(" + to_string(rightTopx) + ", " + to_string(rightTopy) + ") " + "\n" + "(" + to_string(rightBottomx) + ", " + to_string(rightBottomy) + ") " + "\n" + "(" + to_string(leftBottomx) + ", " + to_string(leftBottomy) +  ")" + "\n" + "Area = " + to_string(area) + " Perimeter = " + to_string(perimeter) + "\n";
}
//This re-sets the top left coordinates to be able to move the shape
void rectangle::move(int a, int b) {
	leftTop.setleftTopx(a);
	leftTop.setleftTopy(b);

}
//This increases the size of the rectangle by a multiplier
void rectangle::scale(double a, double b)
{
	width = width * a;
	height = height * b;
}
