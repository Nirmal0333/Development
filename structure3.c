//Address-of operator and structures
#include<stdio.h>
struct complex
{
	int re,im;
};
int main()
{
	struct complex c1={2,3};
	const struct complex c2={4,5};
	printf("Address of c1 is %p\n",&c1);
	printf("Address of its real part is %p\n",&c1.re);
	printf("Address of its imaginary parts is %p\n",&c1.im);
	printf("Address of c2 is %p\n",&c2);
	printf("Address of its real part is %p\n",&c2.re);
	printf("Address of its imaginary parts is %p\n",&c2.im);
}