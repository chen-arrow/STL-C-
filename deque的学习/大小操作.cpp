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
		cout << "Ϊ��" << endl;
	}
	else 
	{
		cout << "��Ϊ��" << endl;
		cout << "d1�Ĵ�С " << d1.size() << endl;
		//dequeû�������ĸ��� �������޵ķ�����
	}
	//����ָ����С  û��ָ����С�Ķ���0
	//d1.resize(15);
	d1.resize(15, 1);
	printfDeque(d1);

	//�����Ĳ��ֻᱻɾ����
	d1.resize(5);
	printfDeque(d1);
}
int main()
{
	test01();
}