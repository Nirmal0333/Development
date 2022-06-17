/*
$   2   3   4
1   $   3   4
1   2   $   4
1   2   3   $
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
	    if(iRow != iCol)
        {
            System.out.println("Invalid input");
            return;
        }

                for(i=1;i<=iRow; i++)
                {
                    for(j =1; j<=iCol; j++)
                    {
						if(i == j)
						{
							System.out.print("$\t");
						}
						else
						{
							System.out.print( j+ "\t");
						}
						
					}
					System.out.println();
                       
                }
    }
}

class PP13
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(4,4);

            obj.DisplayPattern();
    }
}