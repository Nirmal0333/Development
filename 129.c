#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
	
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			return TRUE;
		}
		str++;
			
	}
	return FALSE;
}

int main()
{
	char arr[20];
	char cValue;
	
	BOOL bRet = FALSE;
	
	printf("Enter string\n");
	scanf("%[^'\n']S",arr);
	
	printf("Enter the character\n");
	scanf("%c\n",&cValue);
	
	bRet = ChkChar(arr,cValue);
	
	if(bRet == TRUE)
	{
		printf("Character fount");
	}
	else
	{
		printf("Character not found");
	}
	
	return 0;
}