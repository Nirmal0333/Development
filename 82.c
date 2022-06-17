// Input :  5
// Output :     1   2   3   4   5
#include<stdio.h>
void Display(int i)
{
 	int iCnt = 0;
	
	for(iCnt=1;iCnt<=i;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iValue1 = 0;

    printf("Enter first elements\n");
	scanf("%d",&iValue1);
	
	
	
	Display(iValue1);
	
	return 0;
}