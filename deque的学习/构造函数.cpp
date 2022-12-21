#include<iostream>
using namespace std;
#include<deque>
void printfDeque(const deque<int>&d)
{
	for (deque<int>::const_iterator it=d.begin();it!=d.end();it++)
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
	printfDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	printfDeque(d2);

	deque<int>d3(10, 100);
	printfDeque(d3);

	deque<int>d4(d3);
	printfDeque(d4);
}
int main()
{
	test01();
}