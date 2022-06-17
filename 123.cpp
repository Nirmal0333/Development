#include<iostream>
using namespace std;

bool ChkVowel(char *str)
{
	while(*str != '\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
		{
			return true;
			
		}
		str++;
	}
	return false;
	
}

int main()
{
	char arr[20];
	bool bRet;
	
	cout<<"Enter string"<<endl;
	cin.getline(arr,20);
	
	bRet = ChkVowel(arr);
	
	if(bRet == true)
	{
		cout<<"Contains Vowel"<<endl;
	}
	else
	{
		printf("There is no Vowel");
	}
	
	return 0;
}

