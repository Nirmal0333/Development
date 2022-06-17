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
	
	public boolean ChkEven()
	{
		int iCnt = 0;
		boolean bFlag = true;
		
		for(iCnt = 2; iCnt<= (iNo/2); iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				bFlag = false;
				break;
			}
		}
		return bFlag;
	}
}

class PN17
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		boolean iRet;
		
		
		nobj.Accept();
		iRet = nobj.ChkEven();
		
		if(iRet == true)
		{
			System.out.println("The number is Prime");
		}
		else
		{
			System.out.println("The number is not Prime");
		}

	}
}