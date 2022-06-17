#include<stdio.h>

int CountOdd(int iNo)
{
	int iCnt = 0,iSum = 1;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		iCnt = iNo % 10;
		iNo = iNo /10;
		iSum = iSum * iCnt;
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	
	printf("%d",iRet);
	
	return 0;
}