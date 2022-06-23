#include<stdio.h>
void DisplayI(int no)
{
	auto int iCnt = 1;
	char ch = '\0';
    for(iCnt =1,ch ='A';iCnt<=no;iCnt++,ch++)
	{
		printf("%c\t",ch);
		
	}
}

void DisplayR(int no)
{
	static int iCnt = 1;
	char ch = '\0';
    if(iCnt < no) 
	{
		for(iCnt = 1,ch = 'A';iCnt<=no;iCnt++,ch++)
		printf("%c\t",ch);
		DisplayR(no);
	}
    
}

int main()
{
    DisplayR(6);

    return 0;
}