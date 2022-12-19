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

	//operator=的等值法
	vector<int>v2;
	v2 = v1;
	printfVector(v2);

	//assign
	vector<int>v3;
	v3.assign(v1.begin(), v1.end());
	printfVector(v2);
    
	//n个elem
	vector<int>v4;
	v4.assign(10, 100);
	printfVector(v4);
}
int main()
{
	test01();
	system("pause");
}