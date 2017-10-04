#include <iostream>
#include "Box.h"
using namespace std;

int main()
{
	Box *b1 = new Box(1,2);
	b1->setHeight(2.0);
	cout<<"height: "<<b1->getHeight()<<endl;
	cout<<"width: "<<b1->getWidth()<<endl;
	cout<<"area: "<<b1->area()<<endl;
	system("pause");
	return 0;
}