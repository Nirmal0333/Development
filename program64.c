#include<stdio.h>
void Display(int *ptr)
{
	int iCnt = 0;
	
	printf("The numbers are:\n");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	
}

int main()
{
	int arr[5];
	int iCnt = 0;
	
	printf("Enter the numbers :\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&arr[iCnt]);
	}
	
	Display(arr);
	
	return 0;
}