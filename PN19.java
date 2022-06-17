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

    public void DisplayDigits()
	{
		int iDigit = 0;
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			System.out.println(+iDigit);
			iNo = iNo/10;
		}
	}
	
}

class PN19
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            nobj.Display();

            nobj.DisplayDigits();
    }
}