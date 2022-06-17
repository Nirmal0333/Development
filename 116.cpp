#include<iostream>
using namespace std;

void Display(char ch)
{
	if((ch >= 'A')&&(ch<='Z'))
	{
		ch = ch + 32;
		cout<<ch;
	}
	else if((ch >= 'a') &&(ch <='z'))
	{
		ch = ch -32;
		cout<<ch;
	}
	else if(ch == ch)
	{
		
		cout<<ch;
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