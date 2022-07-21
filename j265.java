import java.lang.*;
import java.util.*;

class j265
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of rows u want to print");
		int i = sobj.nextInt();
		
		System.out.println("Enter the number of rows u want to print");
		int j = sobj.nextInt();
		
		int iRow = i;
		int iCol = j;
		
		for(i = 0;i<iRow;i++)
		{
			for(j = 0;j<iCol;j++)
			{
				System.out.print("*\t");
			}
			System.out.println();
		}

		
	}
}