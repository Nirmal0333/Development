// Template for probplems on N Numbers

import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];
	private int iNo = 0;

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values : ");

        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Accept1()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values to search : ");

        iNo = nextInt();
    }

    public boolean Search()
	{
		int iCnt = 0;
		boolean bFlag = false;
		
		for(iCnt = 0; iCnt < Arr.length;iCnt++)
		{
			if(Arr[iCnt] == iNo)
			{
				bFlag = true;
				break;
			}
		}
		return bFlag;
	}
}

class PA6
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);
            int iLength = 0;
			boolean iRet;

            System.out.println("Enter the value for constructor");
            iLength = sobj.nextInt();
		

            ArrayX obj = new ArrayX(iLength);

            obj.Accept();
         
			
			
			obj.Accept1();

            iRet = obj.Search();
			
			if(iRet == true)
			{
				System.out.println("Element is there in array");
			}
			else 
			{
				System.out.println("Element is not there");
			}

            obj = null;
    }
}