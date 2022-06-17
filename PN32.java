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

    public void Factorial()
    {
        int i = 0;
		
		for(i = 2; i<= iNo;i++)
		{
			if((iNo % i) == 0)
			{
				System.out.println(i);
			}
		}
			
           
    }
}

class PN32
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
            nobj.Display();

            nobj.Factorial();
            
    }
}