import java.lang.*;
import java.util.Scanner;


class PP30
{
    public static void main(String x[])
    {
		Scanner input = new Scanner(System.in);
		System.out.println("Input first number: ");
		int a = input.nextInt();
		System.out.println("Input second number: ");
		int b = input.nextInt();
		int d = (a/b);
		System.out.println();
		System.out.println("The division is : "+d);
	}
           
}