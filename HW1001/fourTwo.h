#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle
{
	Point* middle;
	int radius;
public:

	void Init(int x, int y, int r)
	{
		middle = new Point;
		middle->Init(x, y);
		radius = r;
	}
	void showCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		middle->ShowPointInfo();
	}
};

class Ring
{
	Circle* inner;
	Circle* outter;
public:
	void Init(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inner = new Circle;
		outter = new Circle;
		inner->Init(inX, inY, inR);
		outter->Init(outX, outY, outR);
	}

	void ShowRingInfo() const
	{
		cout << "Inner circle Info..." << endl;
		inner->showCircleInfo();
		cout << "Outter circle Info..." << endl;
		outter->showCircleInfo();
	}
};