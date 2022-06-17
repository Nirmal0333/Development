#include<stdio.h>
#include<stdbool.h>

bool CheckFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	
	for(iCnt = 2;iCnt <=iNo/2;iCnt++)
	{
		if(iNo %iCnt == 0)
		{
			iFactCnt ++;
		}
	}
}
bool CheckPrime(int iNo)
{
	int iRet = 0;
	iRet = CountFactor(iNo);
	if(iRet == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CheckPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
	}		
	return 0;
}