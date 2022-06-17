#include<stdio.h>

void DisplayFactor(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1;i<=(iNo/2);i++)
	{
		if((iNo%i)==0)
		{
			printf("%d\n",i);
		}
	}
}
int main()
{
	int iValue1 = 0;
	
	printf("Enter the numer\n");
	scanf("%d",&iValue1);
	
	DisplayFactor(iValue1);
	
	return 0;
	
}