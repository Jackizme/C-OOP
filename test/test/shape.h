#pragma once
#include "point.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class shape
{
protected:
	int area;
	bool isCircular = false;
	int perimeter;
	point leftTop;
	point points[4];
public:
	shape();

	//These virtual functions are able to be used by any child classes 

	virtual void calculateArea();

	void setleftTop(point);



	virtual void calculatePerimeter(); 


	virtual void calculatePoints(); 


	virtual string toString(); 

	
	

};


