#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{}

void Display(PNODE Head)
{}

int Summation(PNODE Head)
{}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	iRet = Summation(First);
	printf("Additon is : %d\n",iRet);
	return 0;
}