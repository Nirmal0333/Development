//displaying the students names in sorted order

#include<stdio.h>
#include<string.h>
int main()
{
	char names[40][30],current[30];
	int num,i,j;
	printf("How many students are there in the class:\t");
	scanf("%d",&num);
	printf("Enter the names of students:\n");
	for(i=0;i<num;i++)
		gets(names[i]);
	for(i=1;i<num;i++);
	if(strcmp(names[i],names[i-1])<0)
	{
		strcpy(current,names[i]);
		for(j=i-1;j>=0;j--)
		{
			strcpy(names[j+1],names[j]);
			if(j==0||(strcmp(names[j-1],current)<0))
				break;
		}
		strcpy(names[j],current);
	}
	printf("\nAfter sorting,names of students are:\n");
	for(i=0;i<num;i++)
		puts(names[i]);
}