#include<stdio.h>

int Mult(int iNo)
{
	static int iSum = 1;
	static int iDigit = 0;
	
	if(iNo != 0)
	{
		iDigit = iNo % 10;
		iSum = iSum * iDigit;
		iNo = iNo /10;
		Mult(iNo);
	}
	return iSum;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	
	printf("%d",iRet);
	
	return 0;
}