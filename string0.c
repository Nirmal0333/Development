//String concatenation
#include<stdio.h>
#include<malloc.h>
#include<string.h>
int main()
{
	char str1[50],str2[50],*resultant;
	int length1,length2;
	printf("Enter first string:\t");
	gets(str1);
	printf("Enter second string:\t");
	gets(str2);
	length1=strlen(str1);
	length2=strlen(str2);
	resultant=(char*)malloc(length1+length2+1*sizeof(char));
	strcpy(resultant,str1);
	strcat(resultant,str2);
	printf("Concatenated string is %s",resultant);
}
