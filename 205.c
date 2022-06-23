#include<stdio.h>

void Display(int no)
{
	static int iCnt = 1;
	char ch = '\0';
    if(iCnt < no) 
	{
		for(iCnt = 1,ch = 'A';iCnt<=no;iCnt++,ch++)
		printf("%c\t",ch);
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