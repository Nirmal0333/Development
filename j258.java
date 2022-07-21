import java.io.*;
import java.util.*;

class j258
{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the string : ");
            String str = sobj.nextLine();

            String newstr = str.replaceAll("\\s+"," ");
            String newstr2 = newstr.trim();

            String arr[] = newstr2.split(" ");
			
			char ch = 'a';

            for(int i = 0; i < arr.length; i++,ch++)
            {
				
                StringBuffer sb = new StringBuffer(arr[i]);
                System.out.println(sb.reverse());
            }
      }
}