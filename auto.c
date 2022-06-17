//Existence of auto variables

#include<stdio.h>
int main()
{
	auto int a=10;
	printf("The value of a is %d\n",a);
	{
		int b=20;
		printf("The value of b is %d\n",b);
	}
	printf("Here b is not visible\n");
	printf("The value of a is %d",a);
}