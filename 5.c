#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

char ChkVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
		
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter character\n");
	
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == 1)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is not Vowel");
	}
	
	return 0;
}