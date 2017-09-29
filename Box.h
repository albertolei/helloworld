#ifdef CIRCLE_H
#define CIRCLE_H

class Box
{	
private:
	int width;
	int height;
public:
	Box();
	Box(int h, int w);
	int area();
};

#endif