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

                for(i=iRow;i>=1; i--)
                {
                    for(j =1; j<=iCol; j++)
                    {
                        System.out.print(i+"\t");
                    }
                    System.out.println();
                }
    }
}

class PP40
{
    public static void main(String arg[])
    {
            Pattern obj = new Pattern(4,5);

            obj.DisplayPattern();
    }
}