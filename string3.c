//Number of vowels in a string 

#include<stdio.h>
int main()
{
	char string[200];
	int count=0,i=0;
	printf("Enter a string:\n");
	gets(string);
	while(string[i]!='\0')
	{
		switch(string[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			count++;
		}
		i++;
	}
	if(count==1)
		printf("One vowel is present in the string");
	else
		printf("%d vowels are present in the string",count);
}