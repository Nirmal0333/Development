#include<stdio.h>

void Pattern(int iNo)
{
	char c= '\0';
	int iCnt = 0;
	
	for(iCnt = 1,c='A',c ='A';iCnt<=iNo;iCnt++,c++)
	{
		printf("%c\t",c);
	}
	
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}