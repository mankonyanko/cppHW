#include <iostream>
using namespace std;

class Calculator
{
private:
	int cnt[4];

public:
	void Init();
	double Add(double l, double r);
	double Div(double l, double r);
	double Min(double l, double r);
	double Mul(double l, double r);
	void ShowOpCount();
};

void Calculator::Init()
{
	for (int i = 0; i < 4; i++)
		cnt[i] = 0;
}

double Calculator::Add(double l, double r)
{
	cnt[0]++;
	return r + l;
}

double Calculator::Min(double l, double r)
{
	cnt[1]++;
	return l - r;
}

double Calculator::Mul(double l, double r)
{
	cnt[2]++;
	return l*r;
}

double Calculator::Div(double l, double r)
{
	cnt[3]++;
	return l / r;
}


void Calculator::ShowOpCount()
{
	cout << "����: " << cnt[0] <<
		" ����: " << cnt[1] <<
		" ����: " << cnt[2] <<
		" ������: " << cnt[3] << endl;
}
