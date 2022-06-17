// Template for probplems on N Numbers

import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values : ");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of array are : ");
        for(iCnt = 0; iCnt< Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Minimum()
	{
		int iMin = Arr[0], iCnt = 0;
		
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			if(iMin > Arr[iCnt])
			{
				iMin = Arr[iCnt];
			}
		}
		return iMin;
	}
}

class PA5
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);
            int iLength = 0, iRet =0;

            System.out.println("Enter the value for constructor");
            iLength = sobj.nextInt();

            ArrayX obj = new ArrayX(iLength);

            obj.Accept();
            obj.Display();

            iRet = obj.Minimum();
			
			System.out.println("The Minimumm number is : "+iRet);

            obj = null;
    }
}