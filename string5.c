//Number of blank spaces

#include<stdio.h>
int main()
{
	char string[200],ch;
	int count=0,i=0;
	printf("Enter a string:\n");
	gets(string);
	while(string[i]!='\0')
	{
		if(string[i])==' ')
			count++;
		i++;
	}
	printf("Number of blank spaces in the given string are %d",count);
}