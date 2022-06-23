#include<stdio.h>



void Display(int no)
{
    if(no != 0)
    {
        printf("%d\t",no);
        no--;
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