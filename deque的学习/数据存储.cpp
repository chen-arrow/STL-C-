#include<iostream>
using namespace std;
#include<deque>
void test01()
{
	deque<int>d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	//ͷ��
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//ͨ��[]������
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//ͨ��at������
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	//��β
	cout << "��һ��Ԫ��: " << d1.front() << endl;
	cout << "���һ��Ԫ��: " << d1.back() << endl;
}
int main()
{
	test01();
}