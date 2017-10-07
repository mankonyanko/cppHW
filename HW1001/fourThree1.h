#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y)
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

	Circle(int x, int y, int r)
	{
		middle = new Point(x,y);
		radius = r;
	}
	void showCircleInfo() const
	{
		cout << "radius: " << radius << endl;
		middle->ShowPointInfo();
	}
	~Circle()
	{
		delete middle;
	}
};

class Ring
{
	Circle* inner;
	Circle* outter;
public:
	Ring(int inX, int inY, int inR, int outX, int outY, int outR)
	{
		inner = new Circle(inX,inY,inR);
		outter = new Circle(outX, outY,outR);
	}

	void ShowRingInfo() const
	{
		cout << "Inner circle Info..." << endl;
		inner->showCircleInfo();
		cout << "Outter circle Info..." << endl;
		outter->showCircleInfo();
	}
	~Ring()
	{
		delete inner;
		delete outter;
	}

};