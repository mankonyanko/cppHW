#include <iostream>

void swap(int* l, int*r);
void swap(char* l, char* r);
void swap(double* l, double* r);


void swap(int* left, int* right)
{
	int temp = 0;
	temp = *left;
	*left = *right;
	*right = temp;
}

void swap(char* left, char* right)
{
	char temp = 0;
	temp = *left;
	*left = *right;
	*right = temp;
}

void swap(double* left, double*right)
{
	double temp = 0;
	temp = *left;
	*left = *right;
	*right = temp;
}

