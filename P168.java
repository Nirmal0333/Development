//first and last

import java.lang.*;
import java.util.*;

class Bitwise
{
	public int OnBit(int iNo)
	{
		int iMask = 0X80000001;
	    int iResult = 0;
	
	    iResult = iNo ^ iMask;
	    return iResult;
	}
}

class P168
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int iret = bobj.OnBit(value);
	    System.out.println("Updated number is : "+iret);
	}
}