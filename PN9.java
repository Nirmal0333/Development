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
	
	public int ChkEven()
	{
		if((iNo %2) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

class PN9
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		int iRet = 0;
		
		nobj.Accept();
		iRet = nobj.ChkEven();
		
		if(iRet == 1)
		{
			System.out.println("The number is even");
		}
		else
		{
			System.out.println("The number is not even");
		}

	}
}