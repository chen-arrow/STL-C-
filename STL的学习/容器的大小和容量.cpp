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
	if (v1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "v1����Ϊ��" << endl;
		cout << "v1������" << v1.capacity() << endl;
		cout << "v1�Ĵ�С" << v1.size() << endl;
	}

	//�ı�������
	v1.resize(15);
	printfVector(v1);
	//�ı�С������
	v1.resize(5);
	printfVector(v1);
}
int main()
{
	test01();
}