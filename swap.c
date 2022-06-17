#include<stdio.h>
int main()
{
	int number1,number2,number3;
	printf("Enter numbers\t");
	scanf("%d%d",&number1,&number2);
	printf("Numbers before swap%d%d\n",number1,number2);
	number3=number1;
	number1=number2;
	number2=number3;
	printf("Number after swap%d%d\n",number1,number2);
	
	
	
}