//displaying the name of students with a particular character

#include<stdio.h>
#include<string.h>
int main()
{
	char names[40][30],firstchar;
	int num,i;
	printf("How many students are there in the class:\t");
	scanf("%d",&num);
	printf("Enter the names of students:\n");
	for(i=0;i<num;i++)
	gets(names[i]);
	printf("\nEnter the first character of student's name:\t");
	scanf("%c",&firstchar);
	printf("Students whose names starts with %c are:\n",firstchar);
	for(i=0;i<num;i++)
		if(names[i][0]==firstchar)
			puts(names[i]);
	
}