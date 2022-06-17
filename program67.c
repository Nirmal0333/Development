//Array with loop
//Array 

#include<stdio.h>

void Display(int ptr[])
{
	int iCnt = 0;
	printf("Elements of array are:\n");
	
	for(iCnt = 0;iCnt<5;iCnt++)
	{
		printf("%d\n",ptr[iCnt]);
	}
}
int main()
{
	int Arr[5];
	register int iCnt = 0;
	
	printf("Enter elements:\n");
	
    for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	Display(Arr);   //Display(100); name of array is //internally considered as its base address
	
	return 0;
}