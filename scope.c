// Concept of the same scope 

#include<stdio.h>
fun();
int c;
int main()
{
	int a,b;
	printf("a and b have the same scope\n");
	printf("They have loacal scope\n");
	fun();
}
int d;
fun()
{
	printf("c and d have the same scope\n");
	printf("They have global scope");
}
