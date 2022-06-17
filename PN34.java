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

    public void FactRev()
    {
        int i = 0;
		
		for(i = iNo/2; i>= 1;i--)
		{
			if((iNo % i) == 0)
			{
				System.out.println(i);
			}
		}
			
           
    }
}

class PN34
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
            nobj.Display();

            nobj.FactRev();
            
    }
}