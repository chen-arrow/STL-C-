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
		//尾插
		d1.push_back(10);
		d1.push_back(20);

		//头插
		d1.push_front(100);
		d1.push_front(200);
		printfDeque(d1);

		//头删
		d1.pop_front();
		//尾删
		d1.pop_back();
		printfDeque(d1);
	
}
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	printfDeque(d1);

	//插入
	d1.insert(d1.begin(), 1000);
	printfDeque(d1);

	d1.insert(d1.begin(), 2, 10000);
	printfDeque(d1);

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	//第一空是位置，后面就是区间
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printfDeque(d1);
}
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	deque<int>::iterator it = d1.begin();
	it++;
	//删除
	d1.erase(it);
	printfDeque(d1);

	//区间
	d1.erase(d1.begin(), d1.end());
	printfDeque(d1);
	//清除
	d1.clear();
	printfDeque(d1);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}