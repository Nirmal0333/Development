#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[],int iLength)
{
	int iCnt = 0, iNo=0,iSum = 0;
	
	for(iCnt =0;iCnt<iLength;iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iValue = 0,iCnt = 0,iRet = 0;
	int *ptr= NULL;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	ptr = (int *)malloc(iValue*sizeof(int));
	printf("Enter the elements of array: \n");
	for(iCnt = 0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = SummationNumber(ptr,iValue);
	
	printf("Summation is:%d\n",iRet);
	free(ptr);
	
	return 0;
	
}