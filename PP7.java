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
		int iCnt = 0;
        for(iCnt = 1; iCnt<= iNo; iCnt++)
		{
			if((iCnt % 2) == 0)
			{
				System.out.print("*\t");
			}
			else
			{
				System.out.print(iCnt + "\t");
			}
		}
    }

      
}

class PP7
{
    public static void main(String b[])
    {
            Number nobj = new Number();

            nobj.Accept();
            

          
			nobj.Display();
    }
}