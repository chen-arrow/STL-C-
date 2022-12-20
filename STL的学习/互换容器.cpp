#include<iostream>
#include<vector>
using namespace std;
void printfVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printfVector(v1);
	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printfVector(v2);
	//����
	v1.swap(v2);
	printfVector(v1);
	printfVector(v2);

}
//ʵ���÷�
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "������" << v.capacity()<<endl;
	cout << "��С: " << v.size()<<endl;

	//���ܸı������Ĵ�С
	v.resize(3);
	cout << "������" << v.capacity() << endl;
	cout << "��С: " << v.size() << endl;
	//��������������Ըı���������
	vector<int>(v).swap(v);
	cout << "������" << v.capacity() << endl;
	cout << "��С: " << v.size() << endl;
}
int main()
{
	//test01();
	test02();
}