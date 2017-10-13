#include <iostream>
using namespace std;

class Rectangle
{
private:
	int length, height;
public:
	Rectangle(int l, int h) : length(l),height(h)
	{
	}
	void ShowAreaInfo() const
	{
		cout << "¸éÀû: " << length*height << endl;
	}
};

class Square : public Rectangle
{
public:
	Square(int d) :Rectangle(d, d)
	{
	}
		
};