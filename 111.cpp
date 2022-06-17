#include<iostream>
using namespace std;

bool ChkAlpha(char ch)
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
	
	bRet = ChkAlpha(cValue);
	
	if(bRet == true)
	{
		cout<<"It is Character"<<endl;
	}
	else
	{
		cout<<"It is not a Character"<<endl;
	}
}
