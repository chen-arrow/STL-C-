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
		cout << "数组为空" << endl;
	}
	else
	{
		cout << "v1不能为空" << endl;
		cout << "v1的容量" << v1.capacity() << endl;
		cout << "v1的大小" << v1.size() << endl;
	}

	//改变大的容量
	v1.resize(15);
	printfVector(v1);
	//改变小的容量
	v1.resize(5);
	printfVector(v1);
}
int main()
{
	test01();
}