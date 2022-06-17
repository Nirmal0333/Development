#include<stdio.h>
void Display(int arr[])
{
	int iCnt = 0;
	
	printf("The numbers are:\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",arr[iCnt]);
		
	}
	
}

int main()
{
	int brr[5];
	int iCnt = 0;
	
	printf("Enter the numbers :\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&brr[iCnt]);
	}
	
	Display(brr);
	
	return 0;
}