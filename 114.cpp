#include<iostream>
using namespace std;

bool ChkSmall(char ch)
{
	
	
	if((ch >= 'a') && (ch <= 'z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	bool bRet;
	
	cout<<"Enter the character"<<endl;
	cin>>cValue;
	
	bRet = ChkSmall(cValue);
	
	if(bRet == true)
	{
		cout<<"It is Small Case Character"<<endl;
	}
	else
	{
		cout<<"It is not a Small case character"<<endl;
	}
}
