#include<iostream>
using namespace std;

class base
{
	public:
	int i;
	float f;
	double d;
	
	void fun()
	{
		cout<<"Inside Base fun\n";
	}
	
	void gun()
	{
		cout<<"Inside Base gun\n";
	}
	
};
class derived : public base
{
	public:
	int i;
	double d;
	
	void sun()
	{
		cout<<"inside derived sun\n";
	}
	
	void fun()
	{
		cout<<"inside derived fun\n";
	}
};
int main()
{
	
	base bobj;
	derived dobj;
	
	return 0;
}