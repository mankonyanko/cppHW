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
			cout << "직급: 사원" << endl<<endl;
			break;
		case SENIOR:
			cout << "직급: 주임" << endl<<endl;
			break;
		case ASSIST:
			cout << "직급: 대리" << endl<<endl;
			break;
		case MANAGER:
			cout << "직급: 과장" << endl<<endl;
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
		
		strcpy_s(manName,strlen(mN)+1, mN);
		strcpy_s(cmpName,strlen(cN)+1, cN);
		strcpy_s(this->ph,strlen(ph)+1, ph);
		manVarna = varna;
	}

	void ShowNameCardInfo()
	{
		cout << "이름: "<< manName << endl;
		cout << "회사: " << cmpName << endl;
		cout << "전화번호: " << ph << endl;
		COMP_POS::showVarna(manVarna);
	}
	
	~NameCard()
	{
		delete manName;
		delete cmpName;
		delete ph;
	}


};