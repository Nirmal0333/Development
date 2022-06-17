import java.lang.*;
import java.util.*;

class Demo
{
	public int i;
	public int j;
	
	public Demo()
	{
		this.i = 0;
		this.j = 0;
	}
	
	public Demo(int x,int y)
	{
		this.i = x;
		this.j = y;
	}
	
	public void fun()
	{
		System.out.println("Inside fun");
	}
	
	public void gun()
	{
		System.out.println("Inside gun");
	}
}

class Encapsulation
{
	public static void main(String arr[])
	{
		System.out.println("Inside main");
		Demo obj = new Demo();
		obj.fun();
		obj.gun();
		System.out.println(obj.i);
		
		Demo objx = new Demo(11,21);
		obj.fun();
		obj.gun();
		obj.gun();
		System.out.println(objx.i);
	
	}
}