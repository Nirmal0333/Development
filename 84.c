// Input :  5
// Output :  5   *   4   *   3   *   2   *   1   *
// Complexity O(N)
#include<stdio.h>
void Display(int i)
{
 	int iCnt = 0;
	
	for(iCnt=i;iCnt>=1;iCnt--)
	{
		printf("%d\t*\t",iCnt);
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