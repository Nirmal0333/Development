//updator

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
	
	public void Summation()
	{
		int iCnt = 0, iSum = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		for(iCnt = 1; iCnt<=iNo;iCnt++)
		{
			iSum = iSum + iCnt;
			
		}
		System.out.println(+iSum);
		
	}
}

class PN7
{
	int iRet = 0;

	public static void main(String a[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Summation();
		
		
	
	}
}