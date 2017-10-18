#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);
};

ostream& operator<<(ostream& os, const Point& out)
{
	os << '[' << out.xpos << ',' << out.ypos << ']' << endl;
	return os;
}

istream& operator>>(istream& is, Point& in)
{
	is >> in.xpos >>in.ypos;
	return is;
}
