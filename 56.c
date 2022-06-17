#include<stdio.h>
#include<stdlib.h>

int Min(int Arr[],int iNo)
{
	int iCnt = 0;
	int iMin = Arr[0];
	
	for(iCnt = 0;iCnt<iNo;iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
    return iMin;
}

int main()
{
	int iSize = 0,iCnt = 0,iNo = 0,iRet = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	iRet = Min(ptr,iSize);
	
	printf("Smallest Number is %d",iRet);
	
	free(ptr);
	
    return 0;
}