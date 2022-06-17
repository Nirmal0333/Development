import java.lang.*;
import java.util.*;

class AL
{
	public static void main(String arg[])
	{
		ArrayList <String>obj = new ArrayList<String>();
		obj.add("January");
		obj.add("February");
		obj.add("March");
		obj.add("April");
		obj.add("June");
		
		System.out.println("Arraylist contains:"+obj);
		System.out.println("Size is:"+obj.size());
		
		if(obj.contains("April"))
		{
			System.out.println("Element is there");
		}
		int ret = obj.indexOf("April");
		System.out.println("Element is at:"+ret);
		
		System.out.println("Element at index 3 is:"+obj.get(3));
	
		
	}  
}