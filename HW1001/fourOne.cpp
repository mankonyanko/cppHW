//this is modified from FruiSaleSim1.cpp
#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRiCE;
	int numOfApples;
	int myMoney;

public:
	int InitMembers(const int price, const int num, const int money)
	{
		if (price < 0 || num < 0)
		{
			cout << "���� Ȥ�� ����� ������ 0 ���ϰ� �� �� �����ϴ�." << endl;
			return 1;
		}
		APPLE_PRiCE = price;
		numOfApples = num;
		myMoney = money;

		return 0;
	}
	int SaleApples(const int money)
	{
		if (money < 0)
		{
			cout << "����Բ� �ִ� ���� 0���� ���� �� �����!" << endl;
			return 0;
		}
		int num = money / APPLE_PRiCE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller &seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};