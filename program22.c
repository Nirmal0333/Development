//input: 4
//output:10(1+2+3+4+) 

//input: 5
//output:15(1+2+3+4+5)

//input: 7
//output:28(1+2+3+4+5+6+7)

#include<stdio.h>

int Summation(int iNo)
{
	int iSum = 0;
	int iCnt = 0;
	

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	
	for(iCnt = 1; iCnt<= iNO; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}

int main()
{
	int iValue=0;
	int iRet = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Summation(iValue);
	printf("Summation is: %d\n",iRet);
	
	return 0;
}
