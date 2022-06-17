// Template for probplems on Numbers

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

    
	
	public void Display1()
	{
		int iCnt = 0;
		
		for(iCnt = iNo; iCnt >= 1; iCnt--)
		{
		  System.out.print(iCnt + "\t");
		}
	}
	
	public void Display()
    {
		int iCnt = 0;
        for(iCnt = 1; iCnt<= iNo; iCnt++)
		{
			System.out.print(iCnt + "\t");
		}
    }

      
}

class PP5
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            

            nobj.Display1();
			nobj.Display();
    }
}