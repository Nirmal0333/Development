//Display numbers  
import java.lang.*;
import java.util.*;

class ArrayX
{
	private int Arr[];
	
	
	public ArrayX(int iNo)
	{
		Arr = new int[iNo];
	}
	
	public void Display()
	{
		int iCnt = 0;
	
	 for(iCnt = 1;iCnt <= iNo; iCnt++)
	 {
		System.out.println(iCnt);
	 }
	}
}

class PN1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0;
		
		System.out.println("Enter the value");
		
		iValue = new sobj.nextInt();
		
		Display obj = new Display(iValue);
		
		onj.Display();
	}
	
	
}
