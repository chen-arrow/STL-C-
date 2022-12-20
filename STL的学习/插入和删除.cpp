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
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//遍历
	printfVector(v1);
	//尾删除
	v1.pop_back();
	printfVector(v1);

	//插入 第一个参数是迭代器
	v1.insert(v1.begin(), 100);
	printfVector(v1);

	v1.insert(v1.begin(), 2, 100);
	printfVector(v1);
}
int main()
{
	test01();
}