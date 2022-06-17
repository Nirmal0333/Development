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
    
	public int SumDigits()
	{
     int iDigit = 0;
	 int iSum = 0;
	
	 if(iNo < 0)
	 {
		iNo = -iNo;
	 }
	 while(iNo > 0)
	 {
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo/10;
	 }
	 return iSum;
	}
}

class PN22
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;
			
            nobj.Accept();
            nobj.Display();

            iRet = nobj.SumDigits();
			
			System.out.println("The count of Digits is : "+iRet);
    }
}