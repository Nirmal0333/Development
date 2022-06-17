#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int CountChar(char *str,char ch)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch) 
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
	char cValue;
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']S",arr);
	
	printf("Enter the character\n");
	scanf("%c\n",&cValue);
	
	iRet = CountChar(arr,cValue);
	
	printf("Character frequency is %d\n",iRet);
	
	return 0;
}