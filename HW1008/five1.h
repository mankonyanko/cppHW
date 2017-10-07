#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
	enum
	{
		CLERK, SENIOR, ASSIST, MANAGER
	};

	void showVarna(int flag)
	{
		switch (flag)
		{
		case CLERK:
			cout << "����: ���" << endl << endl;
			break;
		case SENIOR:
			cout << "����: ����" << endl << endl;
			break;
		case ASSIST:
			cout << "����: �븮" << endl << endl;
			break;
		case MANAGER:
			cout << "����: ����" << endl << endl;
			break;
		}
	}

}


class NameCard
{
	char* manName;
	char* cmpName;
	char* ph;
	int manVarna;

public:
	NameCard(char* mN, char* cN, char* ph, int varna)
	{
		manName = new char[strlen(mN) + 1];
		cmpName = new char[strlen(cN) + 1];
		this->ph = new char[strlen(ph) + 1];

		strcpy_s(manName, strlen(mN) + 1, mN);
		strcpy_s(cmpName, strlen(cN) + 1, cN);
		strcpy_s(this->ph, strlen(ph) + 1, ph);
		manVarna = varna;
	}
	NameCard(const NameCard& copy) :manVarna(copy.manVarna)
	{
		manName = new char[strlen(copy.manName) + 1];
		cmpName = new char[strlen(copy.cmpName) + 1];
		this->ph = new char[strlen(copy.ph) + 1];

		strcpy_s(manName, strlen(copy.manName) + 1, copy.manName);
		strcpy_s(cmpName, strlen(copy.cmpName) + 1, copy.cmpName);
		strcpy_s(this->ph, strlen(copy.ph) + 1, copy.ph);
	}
	void ShowNameCardInfo()
	{
		cout << "�̸�: " << manName << endl;
		cout << "ȸ��: " << cmpName << endl;
		cout << "��ȭ��ȣ: " << ph << endl;
		COMP_POS::showVarna(manVarna);
	}

	~NameCard()
	{
		delete manName;
		delete cmpName;
		delete ph;
		cout << "call it" << endl;
	}


};