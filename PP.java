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

    public void Display()
    {
        System.out.println("Value is : "+this.iNo);
    }
	
	public void Display1()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt <= iNo; iCnt++)
		{
			System.out.print("*\t");
		}
	}

      
}

class PP
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.Display1();
    }
}