//Pinter to structures
#include<stdio.h>
struct coord
{
	int x,y,z;
	
}pt1={2,3,5},*ptr1;
int main()
{
	struct coord pt2={4,5,6};
	struct coord *ptr2=&pt2;
	ptr1=&pt1;
	printf("Address of pt1 and pt2 are %p%p\n",&pt1,&pt2);
	printf("Address of ptr1 and ptr2 are %p%p\n",&ptr1,&ptr2);
	printf("ptr1 and ptr2 point to %p%p\n",ptr1,ptr2);
	printf("Size of type (struct coord) is %d\n",sizeof(struct coord));
	printf("Size of type (struct coord) is %d\n",sizeof(struct coord*));
	printf("pt1 and pt2 take %d bytes\n",sizeof(pt1));
	printf("pt1 and pt2 take %d bytes\n",sizeof(ptr1));
}