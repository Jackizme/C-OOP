#pragma once
#include "point.h"
class point
{
	int x;
	int y;
	int h;
	int w;
	int e;
	int r;


public:
	//these are all the getters and setters used to get and set data to be used by the functions
	void pointer();

	void setleftTopx(int a)
	{
		x = a;
		

	}
	int getleftTopx()
	{
		return x;
	}


	void setleftTopy(int b)
	{
		y = b;


	}
	int getleftTopy()
	{
		return y;
	}


	void setw(int d)
	{
		w = d;


	}
	int getw()
	{
		return w;
	}


	void seth(int c)
	{
		h = c;


	}
	int geth()
	{
		return h;
	}



	void sete(int f)
	{
		e = f;


	}
	int gete()
	{
		return e;
	}


	void setr(int s)
	{
		r = s;


	}
	int getr()
	{
		return r;
	}



};

