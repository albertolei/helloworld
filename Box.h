#ifndef CIRCLE_H
#define CIRCLE_H

class Box
{	
private:
	double width;
	double height;
public:
	Box();
	Box(double h, double w);
	double getWidth();
	void setWidth(double w);
	double getHeight();
	void setHeight(double h);
	double area();
};

#endif