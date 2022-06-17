//Assigning a pointer to avoid pointer

#include<stdio.h>
int main()
{
	int a=10;
	int*iptr=&a;
	void*vptr=iptr;
	printf("int* is implicitly converted to void*");
}
