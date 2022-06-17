//SumFactors

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
	
	public void SumFactors()
	{
		int iCnt = 0;
		int iSum = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		for(iCnt = 1; iCnt<=(iNo / 2); iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				iSum = iSum + iCnt;
			}
		}
		System.out.println(iSum);
	}
}
class PN4
{
	public static void main(String arg[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.SumFactors();
	}
}
