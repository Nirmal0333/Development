/*

A   A   A   A
B   B   B   B
C   C   C   C
D   D   D   D

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
				char ch = '\0';
	   

                for(i=1,ch = 'A';i<=iRow; i++,ch++)
                {
                    for(j =1; j<=iCol; j++)
                    {
						
						System.out.print(ch +"\t");
					
							
					}
					System.out.println();
                       
                }
    }
}

class PP22
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(4,4);

            obj.DisplayPattern();
    }
}