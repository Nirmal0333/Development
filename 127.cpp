#include<iostream>
using namespace std;

void DisplayDigit(char *str)
{
	
	
	while(*str != '\0')
	{
		if((*str >= '0') || (*str <= '9'))
		{
			
		   cout<<*str;	
			
		}
		str++;
	
		
	}
}

int main()
{
	char arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(arr,20);
	
	DisplayDigit(arr);
	
    

	
	return 0;
}