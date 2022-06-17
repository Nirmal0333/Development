//Display backward and forward

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj = new Scanner (System.in);
		System.out.println("Enter number : ");
		this.iNo = sobj.nextInt();
		
	}
	
	public void Display()
	{
		System.out.println("Value is: "+this.iNo);
	}
	
	public void DisplayForward()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt<=iNo;iCnt++)
		{
			System.out.println(iCnt);
		}
	
	}
	
	public void DisplayBackward()
	{
		int iCnt = 0;
		
		for(iCnt = iNo;iCnt >=1;iCnt--)
		{
			System.out.println(iCnt);
		}
	}
	
}

class PN7
{
	public static void main(String b[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.DisplayForward();
		nobj.DisplayBackward();
	}
}