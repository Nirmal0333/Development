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
		
		
		if((iNo %2) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
		
		
		
	}
}

class PN8
{
	boolean iRet = false;

	public static void main(String a[])
	{
		boolean A = true;
		boolean B = false;
		
		
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.ChkEven();
		
		if(A == true)
		{
			System.out.println("The number is even");
		}
		else
		{
			System.out.println("The number is not even");
		}
	}
}