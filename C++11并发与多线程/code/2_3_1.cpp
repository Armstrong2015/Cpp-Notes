#include <thread>
#include <iostream>

using namespace std;

class TA
{
public:
	void operator()()
	{
		cout << "�߳�1��ʼ����" << endl;
		//...
		cout << "�߳�1��������" << endl;
	}

	void my_print()
	{
		cout << "�߳�2��ʼ����" << endl;
		//...
		cout << "�߳�2��������" << endl;
	}
};

int main()
{
	TA ta;
	thread myobj1(ta);
	myobj1.join();
	thread myobj2(&TA::my_print, ta);
	myobj2.join();
	cout << "i love china" << endl;
	cin.ignore();
	return 0;
}