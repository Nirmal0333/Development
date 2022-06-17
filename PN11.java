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

    public void DisFactors()
    {
            int iCnt = 0;
            
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
            for(iCnt = 1; iCnt < iNo; iCnt++)
            {
                if((iNo % iCnt) == 0)
				{
					System.out.println(iCnt);
				}					
            }
            
    }
}

class PN11
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            

            nobj.Accept();
            nobj.Display();

            nobj.DisFactors();
            
    }
}