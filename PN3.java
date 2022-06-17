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
		int iCnt = 0;
		
		if(iNo < 0)
		{
			System.out.println("Plese enter positive number");
			return;
		}
		
		for(iCnt = 0; iCnt<iNo;iCnt++)
		{
			System.out.println("Hello");
		}
	}
}

class PN24
{
	public static void main(String a[])
	{
		Number nobj = new Number();
		
		nobj.Accept();
		nobj.Display();
		
	
	}
}