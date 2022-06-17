import java.lang.*;

class mythread2
{
	public static void main(String arg[])
	{
		Marvellous mobj1 = new Marvellous();
		Thread t1 = new Thread(mobj1,"First");
		
		Marvellous mobj2 = new Marvellous();
		Thread t2 = new Thread(mobj2,"First");

		t1.start();
		t2.start();
	}
}
class Marvellous implements Runnable
{
	public void run()
	{
		System.out.println("Inside Thread:"+Thread.currentThread().getName());
	}
}