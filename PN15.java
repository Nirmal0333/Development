//updator

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number : ");
		this.iNo = sobj.nextInt();
	}
	
	
	public int ChkPerfect()
	{
		int iCnt = 0, iSum = 0;
		
		for(iCnt =1; iCnt <=(iNo/2);iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				iSum = iSum + iCnt;
			}
			if(iSum > iNo)
			{
				break;
			}
		}
		
		if(iSum == iNo)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

class PN15
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		int iRet = 0;
		
		nobj.Accept();
		iRet = nobj.ChkPerfect();
		
		if(iRet == 1)
		{
			System.out.println("The number is perfect");
		}
		else
		{
			System.out.println("The number is not perfect");
		}

	}
}