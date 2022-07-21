import java.lang.*;
import java.util.*;

class j263
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
		
		for(i = iRow; i>0;i--)
		{
			for(j= 0;j<iCol;j++)
			{
				System.out.print(i+"\t");
			}
			System.out.println();
		}
	}
}