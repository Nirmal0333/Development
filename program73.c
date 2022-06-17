#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int iMax = 0,iCnt = 0;
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(iMax<Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}
int main()
{
	int iValue = 0, iRet = 0, iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	ptr = (int *)malloc(iValue *sizeof(int));
	printf("Enter the elements of array:\n");
	for(iCnt = 0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Maximum(ptr,iValue);
	printf("Maximum number is:%d\n",iRet);
	free(ptr);
	
	return 0;
}