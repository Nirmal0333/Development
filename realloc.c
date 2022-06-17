//Use of realloc function

#include<stdio.h>
#include<malloc.h>
int main()
{
	int *ptr,i;
	ptr=(int*)calloc(3,sizeof(int));
	for(i=0;i<=2;i++)
		ptr[i]=10*(i+1);
	ptr=(int*)realloc(ptr,5*sizeof(int));
	ptr[3]=23;
	ptr[4]=84;
	for(i=0;i<=4,i++;)
		printf("Value at index %d is %d\n",i,*(ptr+i));
	realloc(ptr,0);
	
}