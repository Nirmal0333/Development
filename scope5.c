//shadowing and name resolution

#include<stdio.h>
int a=10;
int main()
{
	printf("The value of a in 7 is %d\n",a);
	{
		int a=20;
		printf("The value of a in line 10 is %d\n",a);
		{
			float a=30.5;
			printf("The value of a in line 13 is %f\n",a);
		}
		
	}
}