//Reverse of a given number

#include<stdio.h>
int main()
{
	int num,reverse=0,digit;
	printf("Enter the number\t");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		reverse=reverse*10+digit;
	}
	printf("Reverse is %d",reverse);
}