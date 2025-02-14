#include<iostream>
using namespace std;
#include<deque>
void printfDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	if (d1.empty())
	{
		cout << "为空" << endl;
	}
	else 
	{
		cout << "不为空" << endl;
		cout << "d1的大小 " << d1.size() << endl;
		//deque没有容量的概念 可以无限的放数据
	}
	//重新指定大小  没有指定大小的都是0
	//d1.resize(15);
	d1.resize(15, 1);
	printfDeque(d1);

	//超出的部分会被删除掉
	d1.resize(5);
	printfDeque(d1);
}
int main()
{
	test01();
}