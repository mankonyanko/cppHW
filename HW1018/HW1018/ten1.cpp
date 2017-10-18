#include "ten1.h"

int main()
{
	Point sex(2, 3);
	Point fella(2, 3);

	Point result;

	result = sex - fella;
	result.ShowPosition();

	result = sex + fella;
	result.ShowPosition();

	result.operator+=(sex);
	result.ShowPosition();

	result.operator-=(fella);
	result.ShowPosition();
	
	if (sex == fella)
		cout << "sex equals fella" << endl;
	if (result != fella)
		cout << "result doesn't equal fella" << endl;
}

