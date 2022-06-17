//SumDigits

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Ener number : ");
		this.iNo = sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is: "+this.iNo);
	}
	
	public void SumDigits()
	{
		int iDigit = 0;
		int iSum = 0;
		
		if(iNo < 0);
		{
			iNo = -iNo;
		}
		while(iNo>0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo/10;
		}
		System.out.println(iSum);
	}
}

class PN12
{
	public static void main(String o[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.SumDigits();
		
	}
}