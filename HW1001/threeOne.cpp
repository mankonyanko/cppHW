#include "threeOne.h"

int main()
{
	Point pos1 = { 12,4 };
	Point pos2 = { 20 ,30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	//getchar();
	return 0;
}

void Point::MovePos(int x, int y)
{
	xpos += x;
	ypos += y;
}

void Point::AddPoint(const Point &pos)
{
	xpos += pos.xpos;
	ypos += pos.ypos;
}

void Point::ShowPosition()
{
	cout << '[' << xpos << ',' << ypos << ']' << endl;
}
