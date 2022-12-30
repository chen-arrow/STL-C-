#include<iostream>
using namespace std;
#include<map>
void test01()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));

	multimap<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(4, 40));
	//查找
	map<int, int>::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "找到了" << endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
	//统计  
	//map不能插入重复的key值元素 count统计而言 结果要么是 1 要么是 0
	// multimap的count可以统计大于1的数
	int num = m.count(3);
	cout << "有" << num<< endl;
	int count = m1.count(3);
	cout << "有" << count << endl;
}
int main()
{
	test01();
	system("pause");
}