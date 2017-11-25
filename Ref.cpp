#include <iostream>
#include "Ref.h"
using namespace std;

void cppref()
{
	int a = 10;
	int &b = a;
	b = 12;
	cout<<a<<","<<b<<endl;
	cout<<&a<<","<<&b<<endl;

	const int &c = b;
	cout<<c<<","<<a<<endl;
	cout<<&c<<","<<&a<<endl;
	b = 20;
	cout<<c<<","<<a<<endl;
	cout<<&c<<","<<&a<<endl;
}