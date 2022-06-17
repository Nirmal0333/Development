import java.lang.*;
import java.util.*;

class Number
{
	private int iNo1;
	private int iNo2;
	private int iNo3;
	
	public void Accept();
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first number: ");
		System.out.println("Enter Second number: ");
		this.iNo = sobj.nextInt();
	}
	
	public int Display()
	{
		int iNo1=0,iNo2 = 0,iNo3 = 0;
		
	    iNo3 = iNo1 + iNo2;
	}
	return iNo3;
}

class PN1
{
	int iRet = 0;
	
	public static void main(String p[])
	{
		Number nobj = new Number();
		
		nobj.Accept = new Number();
		nobj.Accept = new Number();
		
		nobj.Accept();
		nobj.Accept();
		iRet = nobj.Addition();
		
		System.out.println("Addition is: "+iRet);
	}
}