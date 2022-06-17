//Accessing structure members via pointer to the structure object
#include<stdio.h>
struct coord
{
	int x,y;
};
int main()
{
	struct coord pt={2,3};
	struct coord *ptr=&pt;
	printf("Coordinates of Pt1 are (%d,%d)\n",(*ptr).x,(*ptr).y);
	printf("Coordinates of Pt1 are (%d,%d)\n",ptr->x,ptr->y);
}