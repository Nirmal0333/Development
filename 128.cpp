#include<iostream>
using namespace std;

int  strlwrx(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		   	
			
		}
		str++;
		
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	cout<<"Enter string"<<endl;
	cin.getline(arr,20);
	
	iRet = strlwrx(arr);
	
    cout<<iRet<<endl;

	
	return 0;
}