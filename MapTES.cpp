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
	cout << "���ָ���:" << chineseCount << endl;


	cout << "����key��" << endl;
	map<string, int>::iterator it = wordCount.begin();
	while (it != wordCount.end())
	{
		cout << "key:" << it->first.c_str() << ", value:" << it->second << endl;
		it++;
	}


	int count = wordCount.count("spanish");
	cout << count << endl;

	it = wordCount.find("spanish"); 
	
	if (it != wordCount.end())  //ֻ����ô�жϣ��޷���it��= NULL
	{
		cout << it->second << endl;
		cout << wordCount.end()->first.c_str()<<endl; //�˴��ᱨ��
	}
	else
	{
		cout << "none" << endl;
	}
}