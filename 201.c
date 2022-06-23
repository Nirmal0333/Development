#include<stdio.h>

void Display(int no)
{
	static int iCnt = 0;
	
    if(iCnt != no)
    {
        printf("*\t");
        iCnt++;
        Display(no);
    }
}

int main()
{
	
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
    Display(iValue);

    return 0;
}