//Macro to find greatest of the two numbers
#include<stdio.h>
#define GREATEST(a,b) (a>b?a:b)
int main()
{
	int num1,num2;
	printf("Enter two numbers:\t");
	scanf("%d%d",&num1,&num2);
	printf("The greatest of two numbers is %d",GREATEST(num1,num2));
}