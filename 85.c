// Input :  4
// Output : 4   3   2   1  1   2   3   4
// O(2N)
#include<stdio.h>
void Display(int i)
{
 	int iCnt = 0;
	
	for(iCnt=1;iCnt<=i;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	for(iCnt=i;iCnt>=1;iCnt--)
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