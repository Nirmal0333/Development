//count factors
#include<stdio.h>

int CountFactors(int iNo)
{
	int iCnt= 0;
	int iFactCnt = 0;
	
	for(iCnt =1;iCnt<=(iNo/2);iCnt++)
		
	{
		if(iNo%iCnt==0)
		{
		    iFactCnt++;
		}
	}
	return iFactCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountFactors(iValue);
	
	printf("Number of factors are : %d\n",iRet);
	return 0;
}