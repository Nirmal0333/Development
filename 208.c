#include<stdio.h>
int Factorial(int iNo)
{
	static int iFact = 1;
	
	
	if(iNo > 0)
	{
		iFact = iFact * iNo;
		iNo--;
		Factorial(iNo);
	}
	return iFact;
	
	
	

}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number\n");
	 scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("%d",iRet);
	
	return 0;
}