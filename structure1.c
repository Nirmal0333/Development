//Declaring structure object with astorage class specifier other than typedef
#include<stdio.h>
struct point
{
	int x;
	int y;
};
int main()
{
	struct point pt1;
	static struct point pt2;
	printf("The coordinates of pt1 are %d,%d\n,pt1.x,pt1.y");
	printf("The coordinates of pt2 are %d,%d\n,pt2.x,pt2.y");
	
}