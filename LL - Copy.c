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

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next=*Head;
		*Head = newn;
		
	}
}
void InsertLast(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
		
	}
	else
	{
		
	}
}
void Display(PNODE Head)
{
	printf("Elements from linked list are:\n");
	
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");

}
int main()
{
	PNODE First = NULL;
	
	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,102);
	InsertFirst(&First,103);
	InsertFirst(&First,104);
	InsertFirst(&First,105);
	InsertFirst(&First,105);
	InsertFirst(&First,107);
	
	Display(First);
	
	return 0;
}