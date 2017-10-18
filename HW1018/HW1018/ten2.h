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
	Point& operator- ()
	{
		this->xpos = -(this->xpos);
		this->ypos = -(this->ypos);
		return *this;
	}

	friend Point& operator~(Point& ref);
};

Point& operator~(Point& ref)
{
	ref.xpos = ~(ref.xpos);
	ref.ypos = ~(ref.ypos);
	return ref;
}