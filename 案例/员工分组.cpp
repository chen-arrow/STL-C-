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
		worker.m_name = "Ա��";
		worker.m_name = worker.m_name + nameseed[i];
		worker.m_Salary = rand() % 1000 + 10000;   //10000~19999
         
		//��Ա���Ž���
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
	cout << "�߻�" << endl;
	multimap<int, Worker>::iterator pos = m.find(chehua);

	int count = m.count(chehua);
	int index = 0;
	for (; pos != m.end()&&index<count; pos++,index++)
	{
		cout << "����: " << (*pos).second.m_name << " нˮ��" << (*pos).second.m_Salary << endl;
	}
	cout << "-------------------------------" << endl;
	cout << "��������" << endl;
	 pos = m.find(meishu);

	 count = m.count(meishu);
	 index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << (*pos).second.m_name << " нˮ��" << (*pos).second.m_Salary << endl;
	}
	cout << "-------------------------------" << endl;
	cout << "��������" << endl;
	pos = m.find(jishu);

	count = m.count(jishu);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "����: " << (*pos).second.m_name << " нˮ��" << (*pos).second.m_Salary << endl;
	}
}
void test01()
{
	//����Ա��
	vector<Worker>v1;
	creatwroker(v1);

	//Ա������
	multimap<int, Worker>mWorker;
	GroupWorker(v1, mWorker);

	//��ʾԱ��
	showGroup(mWorker);
}
int main()
{
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
}