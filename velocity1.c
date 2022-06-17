//an object undergoes uniformly accelerated motion. The initial velocity (u) of the object and the acceleration (a) are known. write a C program to find the velocity (v) of the object after time t. 

#include<stdio.h>
int main()
{
	float u,v,a,t;
	printf("Enter the value of initial velocity in m/s\t");
	scanf("%f",&u);
	printf("Enter the amount of acceleration\t");
	scanf("%f",&a);
	printf("Enter the time in sec.\t");
	scanf("%f",&t);
	v=u+a*t;
	printf("Velocity after %4.2f sec is %4.2f m/s",t,v);
}