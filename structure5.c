//sizeof  operator & structure
#include<stdio.h>
#pragma option -a
struct pad
{
	char a;
	int b;
	char c;
	float d;
};
int main()
{
	struct pad var;
	printf("Objects of type struct pad will take %d bytes\n",sizeof(struct pad));
	printf("Structure variable var takes %d bytes\n",sizeof var);
}