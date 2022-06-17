#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Frequency(int Arr[],int iNo)
{
	int iCnt = 0,iSum = 0;
	
	for(iCnt = 0;iCnt<iNo;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			iSum++;
		}
	}
	return iSum;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iSize);
	printf("Result is %d",iRet);
    
    free(ptr);
    return 0;
}