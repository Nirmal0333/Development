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

    public void DisplayF()
	{
		int iCnt = 0;
     for(iCnt = 1;iCnt<= iNo;iCnt++)
	 {
		System.out.println(+iCnt);
	 }
	} 
    
	public void DisplayB()
	{
		int iCnt = 0;
		
		for(iCnt = iNo; iCnt >= 1; iCnt--)
		{
			System.out.println(+iCnt);
		}
	}
       
}

class PN16
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            

            nobj.DisplayF();
            nobj.DisplayB();
    }
}