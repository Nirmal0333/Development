#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head,int no)
{}
void InsertLast(PPNODE head,int no)
{}
void Display(PNODE head)
{}
int Count(PNODE head)
{return 0;}
void DeleteFirst(PPNODE head,int no)
{}
void DeleteLast(PPNODE head,int no)
{}
void InsertAtPos(PPNODE head,int pos)
{}
void DeleteAtPos(PPNODE head,int pos)
{}

int main()
{
	PNODE first = NULL;
	
	InsertFirst(&first,55);
	InsertFirst(&first,44);
	InsertFirst(&first,33);
	InsertFirst(&first,22);
	InsertFirst(&first,11);
	
	return 0;
}

