#include<iostream>
using namespace std;

int DisplaySmall(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str >= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout<<"Enter the string"<<endl;
	cin.getline(Arr,20);
	
	iRet = DisplaySmall(Arr);
	cout<<"The count of small number is: "<<iRet<<endl;
	
	return 0;
	
}