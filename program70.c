#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int arr[],int iLength)
{
	int iCnt = 0;
	
	printf("The numbers are:\n");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt] % 2) == 0)
		{
		printf("%d\n",arr[iCnt]);
		}
	}
}
int main()
{
	int iSize = 0;
	int iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(iSize * sizeof(int));
	
	printf("Enter the elements: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	scanf("%d",&ptr[iCnt]);
	}
	
	DisplayEven(ptr, iSize);
	free(ptr);
	
	return 0;
}