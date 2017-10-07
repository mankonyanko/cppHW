#include <iostream>
using namespace std;

class Printer
{
private:
	char* userString;
public:
	void SetString(char* target);
	void ShowString();
};

void Printer::SetString(char* t)
{
	userString = t;
}

void Printer::ShowString()
{
	cout << userString << endl;
}