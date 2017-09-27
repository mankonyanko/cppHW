#include "two.h"
int main()
{
	cout << "문제 2-1-1\n" << endl;
	cout << "입력: ";
	int nUserInput;
	cin >> nUserInput;
	cout << "값을 1 늘리고 부호 바꾸기"<<endl;
	nPlusOne(nUserInput);
	nChangeSign(nUserInput);
	cout << "result: "<<nUserInput << endl;

	cout << "\n문제 2-1-3" << endl;
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);
	cout << num1 << ',' << num2 << endl;

	cout << "\n문제 2-1" << endl;
	const int num = 12;
	const int* ptr = &num;
	const int& ref = *ptr;
	cout << *ptr << ',' << ref << endl;

	cout << "\n문제 2-3" << endl;
	Point* uPt1 = new Point;
	Point* uPt2 = new Point;
	uPt1->xpos = 5;
	uPt1->ypos = 7;
	uPt2->xpos = 8;
	uPt2->ypos = 0;

	Point ptResult = PntAdder(*uPt1, *uPt2);
	cout << ptResult.xpos << ',' << ptResult.ypos << endl;

	cout << "\n문제 2-4-1" << endl;
	char cocktail[30] = "sexOnTheBeach";
	cout << "길이: "<<strlen(cocktail) << endl;//strlen
	
	char added[] = " is delicious";
	strcat_s(cocktail,sizeof(cocktail), added);
	cout << "붙이기: " << cocktail << endl;//strcat_s
	
	char cLine[50];
	strcpy_s(cLine, sizeof(cLine),added);
	cout << "copied line: " << cLine << endl;//strcpy_s

	cout <<"cocktail과 added의 비교: "<< strcmp(cocktail, added) << endl;//strcmp
	
	cout << "\n문제 2-4-2" << endl;
	cout << "5개 난수생성 (0 <= n < 100)" << endl;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		cout << rand() % 101<<' ';

	getchar();
	getchar();
}

void nPlusOne(int& target)
{
	target++;
}

void nChangeSign(int& target)
{
	target = -target;
}

void SwapPointer(int* l, int*r)
{
	int temp = 0;
	temp = *l;
	*l = *r;
	*r = temp;
}

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* temp=new Point;
	temp->xpos = p1.xpos + p2.xpos;
	temp->ypos = p1.ypos + p2.ypos;
	return *temp;
}
