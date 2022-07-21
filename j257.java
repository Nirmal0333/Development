import java.io.*;
import java.util.*;

class j257
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the string : ");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter the string : ");
		String str2 = sobj.nextLine();
		
		
		    if(str1.equals(str2))
            {
                System.out.println("True");
            }
            else
            {
                System.out.println("False");
            }
	}
}