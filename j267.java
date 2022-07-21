import java.lang.*;
import java.util.*;

class j267
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
		
		for(i = 1;i<=iRow;i++)
		{
			for(j = iCol;j>=1;j--)
			{
				System.out.print(j+"\t");
			}
			System.out.println();
		}

		
	}
}