#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;
	
void nPlusOne(int& t);
void nChangeSign(int& t);
void SwapPointer(int* l, int* r);
Point& PntAdder(const Point& p1, const Point& p2);
