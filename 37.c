#include<stdio.h>

int CountOdd(int iNo)
{
	int iCnt = 0,iSum = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
		iCnt = iNo % 10;
		if((iCnt%2)!=0)
		{
			iSum++;
		}
		iNo = iNo / 10;
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