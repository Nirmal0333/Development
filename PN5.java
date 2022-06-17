//DisplayForward

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
	
	public void DisplayForward()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt<=iNo;iCnt++)
		{
			System.out.println(iCnt);
		}
	
	}
	
}

class PN5
{
	public static void main(String arg[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		
		nobj.DisplayForward();
	}
}