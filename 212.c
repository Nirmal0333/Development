#include<stdio.h>
int Factorial(int iNo)
{
	static int iMin = 0;
	static int iDigit = 0;
	
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iMin > iDigit)
		{
			iMin = iDigit;
		}
		iNo = iNo/10;
		iDigit++;
		Factorial(iNo);
	}
	return iMin;
}
int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number\n");
	 scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Minimum Number is: %d\n",iRet);
	
	return 0;
}