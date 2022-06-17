//power

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
		System.out.println("Value is : "+this.iNo);
	}
	
	public void Power()
	{
		int Mult = 0;
		int iCnt = 0;
		
		for(iCnt = 1; iCnt<=iNo;iCnt++)
		{
			Mult = Mult * iNo;
		}
		System.out.println(Mult);
	}
	
}

class PN16
{
	public static void main(String v[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.Power();
	}
}