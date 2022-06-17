#include<stdio.h>

void Display(char ch)
{
	if((ch >= 'A') &&(ch <= 'Z'))
	{
		printf("Decimal value is: %d\n",ch);
		printf("Hexadecimal value is: %X\n",ch);
		printf("Octal value is: %o\n",ch);
	}
} 
int main()
{
	char cValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	Display(cValue); 
	
	return 0;
}
