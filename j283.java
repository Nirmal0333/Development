import java.lang.*;
import java.util.*;

class j283
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Entet the number of rows");
		int i = sobj.nextInt();
		
		
		System.out.println("Enter the number of coloums");
		int j = sobj.nextInt();
		
		int iRow = i;
		int iCol = j;
		
		
		for(i = 1; i<=iRow;i++)
		{
			for(j= iCol;j>=1;j--)
			{
		        if((i==1) || (i==iRow)||(j==1) ||(j==iCol)||(i==j))
				{
					System.out.print("*\t");
				}
				else if(i<j)
				{
					System.out.print("#\t");
				}
				else
				{
					System.out.print("$\t");
				}
			}
			System.out.println();
		}
	}
}