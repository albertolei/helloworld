#include<iostream>
using namespace std;

struct HelloHelper
{
	static void HelloHelper::sayHello()
	{
		cout << "hello world" << endl;
	}
};