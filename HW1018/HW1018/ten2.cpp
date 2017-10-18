#include "ten2.h"

int main()
{
	Point user(7, 9);
	user = -user;

	user.ShowPosition();

	user = ~user;
	user.ShowPosition();
}