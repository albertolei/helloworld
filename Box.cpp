#include "Box.h"

Box::Box()
{
	this->height = 1.0;
	this->width = 1.0;
}
Box::Box(double h, double w)
{
	this->height = h;
	this->width =w;
}
double Box::getWidth()
{
	return this->width;
}
void Box::setWidth(double w)
{
	this->width = w;
}
double Box::getHeight()
{
	return this->height;
}
void Box::setHeight(double h)
{
	this->height = h;
}
double Box::area()
{
	return this->height * this-> width;
}