#include<stdio.h>

int CountEven(int iNo)
{
	int iCnt = 0,iSum = 0;
	
	while(iNo>0)
	{
		iCnt = iNo % 10;
		if((iCnt%2)==0)
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
	
	iRet = CountEven(iValue);
	
	printf("%d",iRet);
	
	return 0;
}