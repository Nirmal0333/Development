//sum of first n natural numbers
#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
	int num;
	printf("Enter the number of natural number that you want to sum up:\t");
	scanf("%d",&num);
	printf("The sum of first %d natural numbers is %d", num,sum(num));
}
int sum(int num)
{
	static int i=1;
	static int result=0;
	result=result+i;
	i++;
	if(i<=num)
		sum(num);
	return result;
}