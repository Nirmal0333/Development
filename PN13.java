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

   

    public int SumFactors()
    {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
				{
					iSum = iSum + iCnt;
				}
            }
            return iSum;
    }
}

class PN13
{
    public static void main(String b[])
    {
            Number nobj = new Number();
            int iRet = 0;

            nobj.Accept();
          

            iRet =nobj.SumFactors();
            System.out.println("Sum of factor is : "+iRet);
    }
}