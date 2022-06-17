#include<iostream>
using namespace std;

void strlwrx(char *str)
{
	
	
	while(*str != '\0')
	{
		if((*str >= 'A') || (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(arr,20);
	
	strlwrx(arr);
	
	cout<<arr<<endl;
	
	return 0;
}