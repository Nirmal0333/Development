//1634 
//Armstrong number
//153
//

#include<stdio.h>
#include<stdbool.h>
int Power(int iNo1, int iNo2)
{
	int iMult = 1;iCnt = 
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<=iNo2;iCnt++)
	{
		lMult = lMult * iNo1;
	}
	return lMult;
}

bool ChkArmstrong(int iNo)
{
	int iTemp = 0;
	int iDigCnt = 0,iDigit = 0,iSum = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	//calculate number of digits
	
	while(iNo !=0)
	{
		iDigCnt++;
		iNo = iNo/10;
	}
	
	iNo = iTemp;
	
	while(iNo !=0)
	{
		iDigit = iNo % 10;
		for(iCnt = 1; iCnt<=iDigCnt;iCnt++)
	    {
		lMult = lMult * iDigit;
	    }
		iSum = iSum + Power(iDigit,iDigCnt);
		
		
		iNo = iNo/10;
	}
	if(iSum == iTemp)
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
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet = ChkArmstrong(iValue);
	
	if(bRet == true)
	{
		printf("%d is armstrong number\n",iValue);
	}
	else
	{
		printf("%d is not armstrong number\n",iValue);
	}
	
	return 0;
}