#include<stdio.h>

typedef int BOOL;
#define True 1
#define False 2

int Check(int iNo)
{
	if((iNo%5)==0)
	{
		return True;
	}
	else
	{
		return False;
	}
}
int main()
{
	int iValue = 0;
	BOOL bRet = False;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	bRet = Check(iValue);
	
	if(bRet == True)
	{
		printf("Divisible by 5");
	}
	else
	{
		printf("Not Divisible by 5");
	}
	return 0;
}