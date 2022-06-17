#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter temprature in Farenheit\t");
	scanf("%f",&f);
	c=5.0/9.0*(f-32);
	printf("Temprature in Celsius is %6.2f",c);
}