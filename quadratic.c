//Roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2;
	int num;
	printf("Enter the coefficients a,b and c\t");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r1=(-b-sqrt(d))/(2*a);
		printf("Roots are real and unequal\n");
		printf("Roots are:%f%f",r1,r2);
		
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		printf("Roots are real and equal\n");
		printf("Roots are:%f%f",r1,r2);
	}
	else printf("No real roots, roots are imaginary");
}