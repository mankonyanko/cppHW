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
		cout << "친구 정보 만들어져써!" << endl;
	}

	void ShowMyFriendInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~MyFriendInfo()
	{
		cout << "친구 정보 주거써 ㅠㅠ" << endl;
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
		cout << "친구 자세한 정보 만들어져써!" << endl;
	}

	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl;
	}

	~MyFriendDetailInfo()
	{
		cout << "친구 자세한 정보 주거써 ㅠㅠ" << endl;
	}
};