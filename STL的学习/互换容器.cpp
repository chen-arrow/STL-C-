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
	//交换
	v1.swap(v2);
	printfVector(v1);
	printfVector(v2);

}
//实际用法
void test02()
{
	vector<int>v;
	for (int i = 0; i < 10000; i++)
	{
		v.push_back(i);
	}
	cout << "容量：" << v.capacity()<<endl;
	cout << "大小: " << v.size()<<endl;

	//不能改变容器的大小
	v.resize(3);
	cout << "容量：" << v.capacity() << endl;
	cout << "大小: " << v.size() << endl;
	//利用匿名对象可以改变容器对象
	vector<int>(v).swap(v);
	cout << "容量：" << v.capacity() << endl;
	cout << "大小: " << v.size() << endl;
}
int main()
{
	//test01();
	test02();
}