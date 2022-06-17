#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iNo,int iStart,int iEnd)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt<iNo;iCnt++)
	{
		if((Arr[iCnt]>iStart)&&
		(Arr[iCnt]<iEnd))
		{
			printf("%d\n",Arr[iCnt]);
		}
	}
    
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0,iValue1 = 0;
	int *p = NULL;
	int iValue2 =0,iNo =0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(sizeof(int)*iSize);
	
	printf("Enter the elements:\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
      scanf("%d",&p[iCnt]);		
	}
	printf("Enter starting point\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point\n");
	scanf("%d",&iValue2);
	

	
	Range(p,iSize,iValue1,iValue2);
	free(p);
	
	return 0;
}