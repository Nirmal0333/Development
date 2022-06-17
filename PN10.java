//count Digits

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
	
	public void CountDigits()
	{
		int iDigit = 0;
		int iCnt = 0;
		
		if(iNo< 0 )
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			iCnt++;
			iNo = iNo/10;
		}
		System.out.println(iCnt);
	}
}

class PN10
{
	public static void main(String o[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.CountDigits();
	}
}
