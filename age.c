//Equivalent age in seconds

#include<stdio.h>
int main()
{
	int age;
	float age_in_sec;
	printf("How old are youu (years)?\t");
	scanf("%d",&age);
	age_in_sec=3.156E7*age;
	printf("Your age in seconds is %5.2E",age_in_sec);
}