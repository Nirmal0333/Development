import java.lang.*;
import java.util.*;

class Student
{
	public int RID;
	public String Name;
	public int Salary;
	
	private static int Generator;
	
	static 
	{
		Generator = 0;
	}
	
	public Student(String str, int value)
	{
		this.RID = ++Generator;
		this.Name = str;
		this.Salary = value;
	}
	
	public void DisplayData()
	{
		System.out.println(this.RID + "\t" + this.Name + "\t" + this.Salary);
	}
}

class DBMS
{
	public LinkedList <Student> lobj;
	
	public DBMS()
	{
		lobj = new LinkedList <>();
	}
	
	public void StartDBMS()
	{
		System.out.println("Marvellous customised DBMS started successfully...");
	}
	
	public void InsertData(String str, int value)
	{
		Student sobj = new Student(str, value);
		lobj.add(sobj);
	}
	
	public void DisplayAll()
	{
		for(Student sref : lobj)
		{
			sref.DisplayData();
		}
	}
	
	public void DisplaySpecific(int rid)
	{
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				sref.DisplayData();
				break;
			}
		}
	}
	
	public void DisplaySpecific(String str)
	{
		for(Student sref : lobj)
		{
			if(str.equals(sref.Name))
			{
				sref.DisplayData();
			}
		}
	}
	
	public void DeleteSpecific(int rid)
	{
		int index = 0;
		
		for(Student sref : lobj)
		{
			if(sref.RID == rid)
			{
				lobj.remove(index);
				break;
			}
			index++;
		
		}
	}
}

class program367
{
	public static void main(String arg[])
	{
		DBMS dobj = new DBMS();
		
		dobj.StartDBMS();
		dobj.InsertData("Nirmal",1000);
		dobj.InsertData("Sakshi",2000);
		dobj.InsertData("Sachin",3000);
		
		dobj.DisplaySpecific(2);
		dobj.DisplaySpecific("Nirmal");
		
		dobj.DeleteSpecific(2);
		dobj.DisplayAll();
	}
}