#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iNo)
{
	int iCnt = 0,iLength = 0,iSum = 1;
	
	for(iCnt = 0;iCnt<iNo;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			iSum = iSum *Arr[iCnt];
		}
	}
    return iSum;
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
	iRet = Product(ptr,iSize);
	
	printf("Product is %d",iRet);
	
	free(ptr);
	
    return 0;
}