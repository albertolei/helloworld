#include<iostream>
#include<vector>
#include "VecTES.h"

/*
测试c++ vector类
*/
using namespace std;

#define vsize 10

void stuVector()
{
	vector<int> obj;
	vector<int>::iterator it;
	obj.push_back(7);
	obj.insert(obj.begin(), 20);
	it = obj.begin();it++;
	obj.insert(it, 14);
	it = obj.begin() + 2;
	obj.insert(it, 70);
	
	it = obj.begin();
	
	it = obj.erase(it);
	cout << "*it:" << *it << endl;

	cout << "大小:" << obj.size() << endl;
	cout << "遍历:" << endl;
	
	for (it = obj.begin(); it < obj.end(); it++)
	{
		cout << *it << endl;
	}
}