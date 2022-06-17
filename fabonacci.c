//Fibonacci Series

#include<stdio.h>
#include<conio.h>
int fib(int num);
int main()
{
	int terms;
	printf("Enter the number of terms that you want to print:\t");
	scanf("%d",&terms);
	printf("%d terms of Fibonacci series are:\n");
	fib(terms);
}
fib(int num)
{
	static int a=0;
	static int b=1;
	static int i=0;
	static int c;
	if(i==0)
	{
		printf("%d",a);
		i++;
	}
	if(i<num)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d",c);
		i++;
		fib(num);
	}
}