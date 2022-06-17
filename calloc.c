//Use of calloc function

#include<stdio.h>
#include<malloc.h>
int main()
{
	int *ptr,i;
	ptr=(int*)calloc(3,sizeof(int));
	for(i=0;i<=2;i++)
		*(ptr+i)=10*(i+1);
	for(i=0;i<=2;i++)
		printf("The value at the index is %d is %d\n",i,*(ptr+1));
}