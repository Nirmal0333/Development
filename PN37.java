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

    public int DisplayDigit()
    {
        int iCnt = 0;
	    int iDigit = 0;
		
	    while(iNo > 0)
        {
           iDigit = iNo % 10;
           iCnt++;
           iNo = iNo /10;
        }
       return iCnt;
	}
}

class PN37
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
            nobj.Display();

            iRet = nobj.DisplayDigit();
			System.out.println("Elements are: "+iRet);
            
    }
}