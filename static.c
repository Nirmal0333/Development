//The value of static variables persists between the function calls

#include<stdio.h>
fun(int i);
main()
{
	int i=0;
	for(i=0;i<5;)
		fun(++i);
}
fun(int i)
{
	static int a=10;
	printf("The value of a on entry to fun on execution no.%d is %d\n",i,a);
	printf("The value of a after increment is %d\n",++a);
}