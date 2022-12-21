#include<iostream>
using namespace std;
#include<deque>
void test01()
{
	deque<int>d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	//头插
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//通过[]来访问
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//通过at来访问
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	//首尾
	cout << "第一个元素: " << d1.front() << endl;
	cout << "最后一个元素: " << d1.back() << endl;
}
int main()
{
	test01();
}