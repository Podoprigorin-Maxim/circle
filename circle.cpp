// circle.cpp
#include "circle.h"

const double PI = 3.14159265358979;

Circle::Circle(double x, double y, double r)
{
	if (r < 0)
		r = 0;

	_x = x;
	_y = y;
	_r = r;
}

Circle::~Circle()
{}


double Circle::getCenterX()
{
	return _x;
}

double Circle::getCenterY()
{
	return _y;
}

double Circle::getRadius()
{
	return _r;
}

void Circle::move(double dx, double dy)
{
	_x += dx;
	_y += dy;
}

void Circle::scale(double k)
{
	_r *= k;
}

double Circle::calculateArea() 
{
	return PI * _r *_r;
}