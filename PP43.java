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
		for(i = 1; i <= iRow;i++)
        {
            for(j = 1; j<= iCol; j++)
            {
                if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                        System.out.print("*\t");
                }
                else
                {
                        System.out.print("@\t");
                }
            }
            System.out.println();
        }

             
    }
}

class PP43
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(6,5);

            obj.DisplayPattern();
    }
}