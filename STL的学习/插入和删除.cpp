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

	//����
	printfVector(v1);
	//βɾ��
	v1.pop_back();
	printfVector(v1);

	//���� ��һ�������ǵ�����
	v1.insert(v1.begin(), 100);
	printfVector(v1);

	v1.insert(v1.begin(), 2, 100);
	printfVector(v1);
}
int main()
{
	test01();
}