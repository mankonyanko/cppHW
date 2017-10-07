#include <iostream>
using namespace std;
struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y);
	void AddPoint(const Point &pos);
	void ShowPosition();
};

