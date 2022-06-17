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

    public int MulFactors()
    {
        int i = 0;
		int iSum = 1;
		
		for(i = 2; i<= iNo/2;i++)
		{
			if((iNo % i) == 0)
			{
				iSum = iSum * i;
			}
		}
		return iSum;
			
           
    }
}

class PN33
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
            nobj.Display();

            iRet = nobj.MulFactors();
			System.out.println("Value is : "+iRet);
            
    }
}