#include <thread>
#include <iostream>

using namespace std;

int main()
{
	auto ta = []() { cout << "�߳̿�ʼ����" << endl;
	cout << "�߳̽�������" << endl; };
	thread myobj(ta);
	myobj.join();
	cout << "i love china" << endl;
	cin.ignore();
	return 0;
}