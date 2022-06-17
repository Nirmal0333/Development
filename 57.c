#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iNo)
{
	int iCnt = 0;
	
	
	for(iCnt = 0;iCnt<iNo;iCnt++)
	{
		if((Arr[iCnt]>99)&&(Arr[iCnt]<999))
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
    
}

int main()
{
	int iSize = 0,iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	Digits(ptr,iSize);
	
	free(ptr);
	
    return 0;
}