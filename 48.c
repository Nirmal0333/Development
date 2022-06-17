#include<stdio.h>
#include<stdlib.h>


#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[],int iLength)
{
	int iCnt = 0;
	bool bFlag = false;
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == 11)
		{bFlag = true;
            
           break;			
		}
	}
	return bFlag;
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	bool bRet = false;
	
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	iRet = Check(p ,iSize);
	if(iRet == true)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}
	free(p);
	
	return 0;
}