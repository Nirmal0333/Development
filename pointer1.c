//Dereferencing pointers

#include<stdio.h>
int main()
{
	int val=12;
	int*iptr=&val;
	int**pptr=&iptr;
	printf("Value is %d\n",val);
	printf("Value by dereferencing iptr is %d\n",*iptr);
	printf("Value by dereferencing pptr is %d\n",**pptr);
	printf("Value of iptr is %p\n",iptr);
	printf("value of pptr is %p\n",pptr);
}