//Macro to check whether a given number is even of odd
#include<stdio.h>
#define EVENDDD(a) ((a)%2==0?"even":"odd")
int main()
{
	int num;
	printf("Enter a number to be checked:\t");
	scanf("%d",&num);
	printf("%d is an %s number", num, EVENDDD(num));
}