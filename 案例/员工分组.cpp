#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<ctime>
#define chehua 0
#define jishu  2
#define meishu 1
using namespace std;
class Worker
{
public:
	string m_name;
	int m_Salary;
};
void creatwroker(vector<Worker>&v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < nameseed.size(); i++)
	{
		Worker worker;
		worker.m_name = "员工";
		worker.m_name = worker.m_name + nameseed[i];
		worker.m_Salary = rand() % 1000 + 10000;   //10000~19999
         
		//将员工放进来
		v.push_back(worker);
	}
}
void GroupWorker(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deparId = rand() % 3;
		m.insert(make_pair(deparId, *it));
	}
}
void showGroup(multimap<int, Worker>& m)
{
	cout << "策划" << endl;
	multimap<int, Worker>::iterator pos = m.find(chehua);

	int count = m.count(chehua);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "姓名: " << (*pos).second.m_name << " 薪水：" << (*pos).second.m_Salary << endl;
	}
	cout << "-------------------------------" << endl;
	cout << "美术部门" << endl;
	 pos = m.find(meishu);

	 count = m.count(meishu);
	 index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << (*pos).second.m_name << " 薪水：" << (*pos).second.m_Salary << endl;
	}
	cout << "-------------------------------" << endl;
	cout << "技术部门" << endl;
	pos = m.find(jishu);

	count = m.count(jishu);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名: " << (*pos).second.m_name << " 薪水：" << (*pos).second.m_Salary << endl;
	}
}
void test01()
{
	//创建员工
	vector<Worker>v1;
	creatwroker(v1);

	//员工分组
	multimap<int, Worker>mWorker;
	GroupWorker(v1, mWorker);

	//显示员工
	showGroup(mWorker);
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
}