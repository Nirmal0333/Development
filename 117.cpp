#include<iostream>
using namespace std;

void Display(char ch)
{
	if((ch >= 'A')&&(ch<='Z'))
	{
		
		while(ch != 'Z'+1)
		{
		    cout<<ch<<"\t";
			ch++;
		}
		
	}
	else if((ch >= 'a') &&(ch <='z'))
	{
		while(ch != 'a'-1)
		{
			cout<<ch<<"\t";
			ch--;
		}
	}
	else 
	{
		return;
	}
	
}
int main()
{
	char cValue = '\0';
	
	cout<<"Enter the character"<<endl;
	cin>>cValue;
	
	Display(cValue);
	
	return 0;
}