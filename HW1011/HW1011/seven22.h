#include <iostream>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(char* tN, char* bcd, int prc) :title(tN), isbn(bcd), price(prc)
	{
	}
	void ShowBookInfo() const
	{
		cout << "����: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "����: " << price << endl;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;
public:
	EBook(char* tN, char* bcd, int prc, char*key) :Book(tN, bcd, prc), DRMKey(key)
	{}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "����Ű: " << DRMKey << endl;
	}
};
