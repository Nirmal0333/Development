#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int iMin = Arr[0],iCnt = 0;
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(iMin>Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
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
	
	iRet = Minimum(ptr,iValue);
	printf("Minimum number is:%d\n",iRet);
	free(ptr);
	
	return 0;
}