//Reverse

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
	
	public void Display()
	{
		System.out.println("Value is: "+this.iNo);
	}
	
	public void Reverse()
	{
		int iDigit = 0;
		int iRev = 0;
		
		while(iNo > 0)
		{
			iDigit = iNo %10;
			iRev = iRev * 10 + iDigit;
			iNo = iNo/10;
		}
		System.out.println(iRev);
	}
	
}

class PN15
{
	public static void main(String x[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.Reverse();
	}
}