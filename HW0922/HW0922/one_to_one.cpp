#include <iostream>
using namespace std;
int main()
{
	cout << "���� 1-1-1" << endl;
	int sum=0;
	int operend;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> operend;
		sum += operend;
	}
	cout << "�հ�: " << sum << endl << endl;

	char name[100];
	char ph_address[100];
	cout << "���� 1-1-2" << endl;
	cout<<"�̸�: ";
	cin >> name;
	cout << endl << "��ȭ��ȣ: ";
	cin >> ph_address;
	cout << "����� �̸�: " << name << ",����� ����: " << ph_address << endl<<endl;

	int gugudan = 0;
	cout << "����1-1-3" << endl;
	cout << "������ ���: ";
	cin >> gugudan;
	for (int i = 0; i < 9; i++)
		cout << gugudan << "*" << i + 1 << "=" << gugudan*(i + 1) << endl;

	float sell=0;
	cout << endl<< "����1-1-4" << endl;
	while (sell != -1)
	{
		cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		cin >> sell;
		if (sell != -1)
			cout << "�̹� �� �޿�: " << 50 + sell*0.12 << "����" << endl;
		else
			cout << "���α׷��� �����մϴ�." << endl;
	}
}
