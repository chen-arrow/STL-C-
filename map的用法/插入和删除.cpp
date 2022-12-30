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

	//第一种方法
	m.insert(pair<int, int>(1, 100));

	//第二种方法
	m.insert(make_pair(2, 200));

	//第三种方法
	m.insert(map<int, int>::value_type(3, 300));

	//第四种
	m[4] = 400;
	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//清空
	//m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}
int main()
{
	test01();
	system("pause");
}