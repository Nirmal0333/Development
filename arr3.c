//Equality operator & arrays

#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	int b[3]={10,20,30};
	if(a==b)
		printf("Arrays are equal");
	else
		printf("Arrays are not equal");
}