//typedef storage class specifier

#include<stdio.h>
main()
{
	typedef char*cp;
	cp c;
	printf("The size of character pointer c is %d bytes",sizeof(c));
}