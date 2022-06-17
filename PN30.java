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

    public boolean Check()
    {
        if((iNo % 2) == 0)
		{
			return true;
		}
		else
		{
		    return false;
		}
			
			
           
    }
}

class PN30
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            boolean iRet;

            nobj.Accept();
            nobj.Display();

            iRet = nobj.Check();
			
			if(iRet == true)
			{
				System.out.println("The number is even");
			}
			else 
			{
				System.out.println("The number is not even");
			}
            
    }
}
			