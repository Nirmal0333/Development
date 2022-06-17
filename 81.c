// Input :  5
// Output :     *   *   *   *   *
#include<stdio.h>
void Display(int i)
{
 	int iCnt = 0;
	
	for(iCnt=1;iCnt<=i;iCnt++)
	{
		printf("*\t");
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