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
	
	public boolean ChkPallindrome()
	{
		int iDigit = 0;
		int iRev = 0;
		int iTemp = 0;
		
		iTemp = iNo;
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			iRev = iRev * 10 + iDigit;
			iNo = iNo / 10;
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
}

class PN26
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		boolean iRet;
		
		
		nobj.Accept();
		iRet = nobj.ChkPallindrome();
		
		if(iRet == true)
		{
			System.out.println("The number is Pallindrome");
		}
		else
		{
			System.out.println("The number is not Pallindrome");
		}

	}
}