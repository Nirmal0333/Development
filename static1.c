//static storage class specifier

#include<stdio.h>
int add(static int a,static int b)
{
	return a+b;
}
main()
{
	int c=add(2,3);
	printf("The value of c is %d",c);
}