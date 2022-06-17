#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt = 0;
	
	
	if(iNo<=0)
	{
		return;
	}
	for(iCnt = 1;iCnt=iNo;iCnt+=2)
	{	if((iCnt % 2)== 0)
		{
			printf("%d\n",iCnt);
		}
	}
		
}

int main()
{   
    int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	PrintEven(iValue);
	
	return 0;
}