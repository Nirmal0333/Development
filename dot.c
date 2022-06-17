//use of dot operator
#include<stdio.h>
struct coord
{
	int x,y;
};
int main()
{
	struct coord pt1={4,5};
	const struct coord pt2={2,3};
	int tx,ty;
	printf("Enter values of translation vector:\n");
	scanf("%d%d",&tx,&ty);
	printf("After translation, coordinates are:\n");
	printf("Pt1(%d%d)\n",pt1.x+tx,pt1.y=ty);
	printf("Pt2(%d%d)\n",pt2.x+tx,pt2.y+ty);
}