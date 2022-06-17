//use of single-dimentional array

#include<stdio.h>
int main()
{
	int marks[200],|c,studs,sum=0;
	float average;
	printf("Enter the number of students in class\t");
	scanf("%d",&students);
	printf("Enter marks of students\n\n");
	for(|c=0;|c<studs;|c++)
	{
		printf("Enter marks of student %d\t",|c+1);
		scanf("%d",&marks[|c]);
	}
	for (|c=0;|c<studs;|c++)
		sum=sum+marks[|c];
	average=(float)sum/studs;
	printf("\nAverage marks of the class is %f",average);
}