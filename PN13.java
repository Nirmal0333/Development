//DisplayEven

import java.lang.*;
import java.util.*;

class Number
{
	private int iNo;
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number: ");
		this.iNo = sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Valu is : "+this.iNo);
	}
	
	public void DisplayEven()
	{
		int iDigit = 0;
		
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			System.out.println(iDigit);
		}
	}
}
class PN13
{
	public static void main(String b[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.DisplayEven();
	}
}