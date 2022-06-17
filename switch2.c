//switch statement and ranges

#include<stdio.h>
int main()
{
	char exp='E';
	switch(exp)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		printf("Lower case vowel\n");
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
		printf("Upper case vowel\n");
	}
}