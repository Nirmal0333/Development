#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void StrCpySmall(char *src,char *dest)
{
	while(*src != '\0')
	{
		if((*src >='a') &&(*src<='a'))
		{
			*src = *dest;
			src++;
			
		}
		dest--;
		
	}
	*dest= '\0';
	
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char brr[30];
	
	StrCpySmall(arr, brr);
	
	printf("%s",brr);
	
	return 0;
}