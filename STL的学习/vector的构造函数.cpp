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
	//默认构造函数
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printfVector(v1);


	//通过区间的方式
	vector<int>v2(v1.begin(), v1.end());
	printfVector(v2);

	//n个elem的函数  10个100
	vector<int>v3(10, 100);
	printfVector(v3);

	//拷贝构造函数
	vector<int>v4(v3);
	printfVector(v4);
}
int main()
{
	test01();
	system("pause");
}