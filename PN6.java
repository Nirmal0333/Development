//DisplayBackward

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
	
	public void DisplayBackward()
	{
		int iCnt = 0;
		
		for(iCnt = iNo;iCnt >=1;iCnt--)
		{
			System.out.println(iCnt);
		}
	}
}


class PN6
{
	public static void main(String y[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		
		nobj.DisplayBackward();
	}
}