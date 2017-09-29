#include "Box.h"

Box::Box()
{
	
}
Box::Box(int h, int w)
{
	this->height = h;
	this->width =w;
}
Box::area()
{
	return this->height * this-> width;
}
