#include<iostream>
#include<map>
#include "MapTES.h"

using namespace std;

void stuMap()
{
	map<string, int> wordCount;
	wordCount.insert(make_pair("chinese",200));
	wordCount.insert(make_pair("english", 9));
	wordCount.insert(make_pair("frence",100));
	wordCount["germany"] = 80;
	wordCount["spanish"] = 19;

	int chineseCount = wordCount.at("chinese");
	cout << "汉字个数:" << chineseCount << endl;


	cout << "所有key：" << endl;
	map<string, int>::iterator it = wordCount.begin();
	while (it != wordCount.end())
	{
		cout << "key:" << it->first.c_str() << ", value:" << it->second << endl;
		it++;
	}


	int count = wordCount.count("spanish");
	cout << count << endl;

	it = wordCount.find("spanish"); 
	
	if (it != wordCount.end())  //只能这么判断，无法用it！= NULL
	{
		cout << it->second << endl;
		cout << wordCount.end()->first.c_str()<<endl; //此处会报错
	}
	else
	{
		cout << "none" << endl;
	}
}