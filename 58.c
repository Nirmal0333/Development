#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[],int iLength)
{
	int iCnt = 0,iSum = 0,iNo = 0;
	for(iCnt =1;iCnt<=iNo;iCnt++)
	{
		
	}
	
}
int main()
{
	int iSize = 0,iRet = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p= (int *)malloc(iSize*sizeof(int));
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	DigitSum(p,iSize);
	
	free(p);
	return 0;
}