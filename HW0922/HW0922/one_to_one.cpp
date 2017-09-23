#include <iostream>
using namespace std;
int main()
{
	cout << "문제 1-1-1" << endl;
	int sum=0;
	int operend;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 정수 입력: ";
		cin >> operend;
		sum += operend;
	}
	cout << "합계: " << sum << endl << endl;

	char name[100];
	char ph_address[100];
	cout << "문제 1-1-2" << endl;
	cout<<"이름: ";
	cin >> name;
	cout << endl << "전화번호: ";
	cin >> ph_address;
	cout << "사용자 이름: " << name << ",사용자 전번: " << ph_address << endl<<endl;

	int gugudan = 0;
	cout << "문제1-1-3" << endl;
	cout << "구구단 출력: ";
	cin >> gugudan;
	for (int i = 0; i < 9; i++)
		cout << gugudan << "*" << i + 1 << "=" << gugudan*(i + 1) << endl;

	float sell=0;
	cout << endl<< "문제1-1-4" << endl;
	while (sell != -1)
	{
		cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		cin >> sell;
		if (sell != -1)
			cout << "이번 달 급여: " << 50 + sell*0.12 << "만원" << endl;
		else
			cout << "프로그램을 종료합니다." << endl;
	}
}
