#include<iostream>
using namespace std;

bool ChkCapital(char ch)
{
	
	
	if((ch >= 'A') && (ch <= 'Z'))
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
	
	bRet = ChkCapital(cValue);
	
	if(bRet == true)
	{
		cout<<"It is Capital Character"<<endl;
	}
	else
	{
		cout<<"It is not Capital Character"<<endl;
	}
}
