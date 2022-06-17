//count Factor

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
	
	public void CountFactor()
	{
		int iCnt = 0;
		int iFactCnt = 0;
		
		for(iCnt = 1;iCnt<=(iNo/2);iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				iFactCnt++;
			}
		}
		System.out.println(iFactCnt);
	}
}

class PN8
{
	public static void main(String b[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
		nobj.CountFactor();
	}
}