//Count number of occurrences of a particular character in the string

#include<stdio.h>
int main()
{
	char string[200],ch;
	int count=0,i=0;
	printf("Enter a string:\n");
	gets(string);
	printf("Enter the character:\t");
	scanf("%c",&ch);
	while(string[i]!='\0')
	{
		if(string[i]==ch)
			count++;
		i++;
	}
	printf("In the given string,%c occurred %d times\n",ch,count);
}