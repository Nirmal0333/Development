#include<stdio.h>

void Reverse(int iNo)
{
	
	static int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		printf("%d\t",iDigit);
		iNo = iNo /10;
		Reverse(iNo);
	}
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Reverse(iValue);
	
	
	
	return 0;
}