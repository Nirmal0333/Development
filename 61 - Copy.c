#include<stdio.h>

void Pattern(int iNo)
{
	char c= '\0';
	for(c = 'A';c<='Z';c++)
	{
		printf("%c",c);
	}
	
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter number of elements");
	scanf("%d%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}