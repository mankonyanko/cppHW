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
			cout << "가격 혹은 사과의 갯수는 0 이하가 될 수 없습니다." << endl;
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
			cout << "사장님께 주는 돈은 0보다 작을 수 없어요!" << endl;
			return 0;
		}
		int num = money / APPLE_PRiCE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() const
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
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
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};