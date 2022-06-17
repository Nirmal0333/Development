/*

A
B   B
C   C   C
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
	   

                for(i=1;i<=iRow; i++)
                {
                    for(j =1,ch = 'A'; j<=i; j++,ch++)
                    {
						
						System.out.print(ch +"\t");
					
							
					}
					System.out.println();
                       
                }
    }
}

class PP23
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(4,4);

            obj.DisplayPattern();
    }
}