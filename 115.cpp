#include<iostream>
using namespace std;

void DisplaySchedule(char chDiv)
{
	if(chDiv == 'A')
	{
		cout<<"Your exam is at 7 AM"<<endl;
	}
	else if(chDiv == 'B')
	{
		cout<<"Your exam is at 8.30 AM"<<endl;
	}
	else if(chDiv == 'C')
	{
		cout<<"Your exam is at 9.20 AM"<<endl;
	}
	else if(chDiv == 'D')
	{
		cout<<"Your exam is at 10.30 AM"<<endl;
	}
	else
	{
		cout<<"Invalid Input"<<endl;
	}
}

int main()
{
	char cValue = '\0';
	
	
	cout<<"Enter your division"<<endl;
	cin>>cValue;
	
	DisplaySchedule(cValue);
	
	return 0;
}