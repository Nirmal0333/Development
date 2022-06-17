//Macro to find the harmonic mena of two numbers
#include<stdio.h>
#define HMEAN(a,b) ((float)(2*(a)*(b))/((a)+(b))) 
int main()
{
	int num1,num2;
	printf("Enter two numbers:\t");
	scanf("%d%d",&num1,&num2);
	printf("Harmonic mean of %d and %d is %f", num1,num2,HMEAN(num1,num2));
}