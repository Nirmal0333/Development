#include<stdio.h>


void DisplayI()
{
	auto int iCnt = 0;
	
	while(iCnt < 5)
	{
		printf("*\t");
		iCnt++;
	}
}

void DisplayR()
{
	static int iCnt = 0;
	
	if(iCnt < 5)
	{
		printf("*\t");
		iCnt++;
		DisplayR();
	}
}
int main()
{
	DisplayR();
	
	return 0;
}