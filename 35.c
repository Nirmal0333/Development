#include<stdio.h>

int CountTwo(int iNo)
{
	int iCnt = 0;
    int iSum = 0;
	
	while(iNo>0)
	{
		iCnt = iNo % 10;
		if((iCnt == 0) && (iCnt>=6))
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
	int bRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = CountTwo(iValue);
	
	printf("%d\n",bRet);
	
	return 0;
}