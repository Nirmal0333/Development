#include<stdio.h>
#include<stdlib.h>
//postive&negative
int Minimum(int Arr[],int iLength)
{
	int iMin = Arr[0];//0th element of array
	int iCnt = 0;
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
    int iCnt = 0;
	int iSize = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
    
	printf("Enter the values\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Minimum(ptr,iSize);
	
	printf("Minimum is:%d\n",iRet);
	free(ptr);
	
	return 0;
}