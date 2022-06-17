/*
*   *   *   $
*   *   $   *
*   $   *   *
$   *   *   *


*/

import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow, iCol;

    public Pattern(int a, int b)
    {
        iRow = a;
        iCol = b;
    }

    public void DisplayPattern()
    {
        int i =0, j = 0;
			
        for(i=1;i<=iRow; i++)
        {
            for(j = iCol; j>=1; j--)
            {
				if(i == j)
				{
				    System.out.print("$\t");	
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.println();
        }
	}
}

class PP29
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(4,4);

            obj.DisplayPattern();
    }
}