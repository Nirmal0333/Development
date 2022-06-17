//SumEven

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Eneter number: ");
		this.iNo = sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Value is : "+this.iNo);
	}
	
	public void SumEven()
	{
		int iDigit = 0;
		int iSum = 0;
		
		while(iNo> 0)
		{
			iDigit = iNo % 10;
			if((iDigit % 2 ) == 0)
			{
				iSum = iSum + iDigit;
			}
			iNo = iNo/10;
		}
		System.out.println(iSum);
	}
}

class PN14
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.SumEven();
	}
}