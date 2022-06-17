// Template for probplems on Pattern printing

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
        int i = 0;
		char ch = '\0';
		
		for(i =1,ch ='A';i<=iRow;i++,ch++ )
		{
			System.out.println(ch);
		}
    }
}

class PP31
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(5,5);

            obj.DisplayPattern();
    }
}