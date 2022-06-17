#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iCnt = 0;
	while(iNo>0)
	{
		iCnt = iNo % 10;
		if(iCnt == 0)
		{
			break;
		}
		iNo = iNo / 10;
	}
	return 1;
}
int main()
{
	int iValue = 0;
	BOOL bRet;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
		printf("It contains zero");
	}
	else
	{
		printf("There is no zero");
		
	}
	return 0;
}