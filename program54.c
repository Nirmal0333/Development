#include<stdio.h>
#include<stdbool.h>

bool ChkPallandrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev*10 + iDigit;
        iNo = iNo/10;
	}
    if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = ChkPallandrome(iValue);
	
	if(bRet == true)
	{
		printf("%d is pallandrome number\n",iValue);
	}
	else
	{
		printf("%d is not a pallandrome number\n",iValue);
	}
	
	
	return 0;
}