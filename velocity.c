//The velocity of an object is give in km\hr. write a C program to convert the given velocity from km\hr to m\sec

#include<stdio.h>
int main()
{
	float velk,velm;
	printf("Enter velocity in Km/hr\t");
	scanf("%f",&velk);
	velm=velk*5/18;
	printf("Equivalent velocity is %fm/sec",velm);
}