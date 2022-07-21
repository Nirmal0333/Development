import java.lang.*;
import java.util.*;

class j262
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of rows u want to print");
		int i = sobj.nextInt();
		
		System.out.println("Enter the number of rows u want to print");
		int j = sobj.nextInt();
		
		char ch = 'A';
		
		int iRow = i;
		int iCol = j;
		
		for(i = 0,ch = 'A';i<iRow;i++,ch++)
		{
			for(j = 0;j<iCol;j++)
			{
				System.out.print(ch+"\t");
			}
			System.out.println();
		}

		
	}
}