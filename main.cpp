#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
	Box *b1 = new Box(1,2);
	//b1->setWidth(10);
	//b1->setHeigh(20);
	cout<<b1->getHeight()<<endl;
	cout<<b1->getWidth()<<endl;
	system("pause");
	return 0;
}
