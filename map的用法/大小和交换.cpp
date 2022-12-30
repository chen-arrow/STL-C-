#include<iostream>
using namespace std;
#include<map>
void printMap(map<int, int>m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key= " << (*it).first << " value= " << (*it).second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << "大小为: " << m.size() << endl;
	}
	

}
//交换
void test02()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));

	map<int, int>m;
	m.insert(pair<int, int>(5, 100));
	m.insert(pair<int, int>(6, 300));
	m.insert(pair<int, int>(7, 200));
	m.insert(pair<int, int>(8, 400));


	m1.swap(m);
	printMap(m1);
	printMap(m);
}
int main()
{
	//test01();
	test02();
}