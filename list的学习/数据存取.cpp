#include<iostream>
#include<list>
using namespace std;
void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	cout << "第一个元素: " << L.front() << endl;
	cout << "最后一个元素: " << L.back() << endl;

	//验证这是否是支持随机访问
	list<int>::iterator it = L.begin();
	it++;
}
int main()
{
	test01();
}