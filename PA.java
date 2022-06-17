//CountEven

import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}
	
	public void Accept()
	{
		int iCnt = 0;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the values : ");
		
		for(iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}
	
	public void Display()
	{
		int iCnt = 0;
		
		System.out.println("Elements of array are : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
	
	public int CountEven()
	{
		int iCnt = 0;
		int iEvenCnt = 0;
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			if((Arr[iCnt] % 2) == 0)
			{
			
			iEvenCnt++;
			
			}
			
		}
		return iEvenCnt;
		
		
	}
}

class PA
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iLength = 0, iRet = 0;
		
		System.out.println("Enter the values for constructor");
		iLength = sobj.nextInt();
		
		ArrayX obj = new ArrayX(iLength);
		
		obj.Accept();
		obj.Display();
		
		iRet = obj.CountEven();
		System.out.println("Even count is: "+iRet);
		
		
		obj = null;
		
	}
}