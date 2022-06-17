//count digit

#include<stdio.h>

int CountDigit(int iNo)
{
	int iCnt = 0;
	int iDigit = 10;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo % 10;
		iCnt++;
		iNo = iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);
	
	printf("Number of digits are: %d\n",iRet);
	
	return 0;
}