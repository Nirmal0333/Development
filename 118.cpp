#include<iostream>
using namespace std;

bool ChkSpecial(char ch)
{
     if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
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
	
	bRet = ChkSpecial(cValue);
	
	if(bRet == true)
	{
		cout<<"It is Special Character"<<endl;
	}
	else 
	{
		cout<<"It is not a special charater"<<endl;
	}
	
	return 0;
}