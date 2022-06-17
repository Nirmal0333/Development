//Memory leak

#include<stdio.h>
#include<malloc.h>
#include<string.h>
void *lcase(char* Uname)
{
	char *Lname;
	int i=0;
	Lname=(char*)malloc(strlen(Uname)+1);
	while(*(Uname+i)!='\0')
	{
		*(Lname+i)=*(Uname+i)+32;
		i++;
	}
	*(Lname+i)='\0';
	printf("Name in Lower Case is %s\n",Lname);
}
int main()
{
	char name[]="SAM";
	printf("Name in Upper Case is %s\n",name);
	lcase(name);
}