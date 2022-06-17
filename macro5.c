//Nested macro to check whether a given three digit number is an Armsrong number or not
#include<stdio.h>
#define POW3(x)((x)*(x)*(x))
#define ARM(n)((n==POW3(n%10)+POW3(n/10%10)+POW3(n/100%10))?"is":"is not")
int main()
{
	int num;
	printf("Enter a three digit number:\t");
	scanf("%d",&num);
	printf("%d%s an Armstrong number",num,ARM(num));
}