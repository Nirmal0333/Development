//Macro to swap the contents of two variables
#include<stdio.h>
#define SWAP(a,b) (a^=b^=a^=b)
int main()
{
	int num1,num2;
	printf("Enter two numbers:\t");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping, the value of num1=%d and num2=%d\n",num1,num2);
	SWAP(num1,num2);
	printf("After swapping, the value of num1=%d and num2=%d",num1,num2);
}