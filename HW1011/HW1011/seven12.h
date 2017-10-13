#include <iostream>
using namespace std;

class MyFriendInfo
{
private:
	char* name;
	int age;
public:
	MyFriendInfo(char* nm, int fAge)
	{
		name = nm;
		age = fAge;
		cout << "ģ�� ���� ���������!" << endl;
	}

	void ShowMyFriendInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~MyFriendInfo()
	{
		cout << "ģ�� ���� �ְŽ� �Ф�" << endl;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(char* nm, int fAge, char* adr, char*ph) : MyFriendInfo(nm, fAge)
	{
		addr = adr;
		phone = ph;
		cout << "ģ�� �ڼ��� ���� ���������!" << endl;
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl;
	}

	~MyFriendDetailInfo()
	{
		cout << "ģ�� �ڼ��� ���� �ְŽ� �Ф�" << endl;
	}
};