import java.lang.*;
import java.util.*;

class j264
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
		int a = 1;
		
		for(i = 1; i<=iRow;i++)
		{
			for(j= 1;j<=iCol;j++)
			{
				System.out.print(a++ +"\t");
			}
			System.out.println();
		}
	}
}