import java.lang.*;
import java.util.*;

class j277
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int i = 0, j = 0;
        
        for( i = Arr.length; i >0; i--)
        {
            for( j =0; j <Arr.length; j++)
            {
                if(i<=j)
				{
					System.out.print("*  ");
					
				}
				else
				{
					System.out.print(Arr[j]+"  ");
				}
				
            }
            System.out.println();
        }
        

    }
}