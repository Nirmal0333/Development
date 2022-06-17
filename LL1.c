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

void InsertFirst(PPNODE head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}
}
void InsertLast(PPNODE head,int iNo)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		*head = temp;
		
		while(temp ->next !=NULL)
		{
			temp= temp->next;	
		}
		temp->next = newn;
	}
}
void Display(PNODE head)
{
	printf("Data from Linked List is\n");
	
	while(head!=NULL)
	{
		printf("|%d|",head->data);
		head = head->next;
	}
	printf("NULL\n");
}
int Count(PNODE head)
{
	int iCnt = 0;
	while(head!=NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
	
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	
	InsertFirst(&First,11);
	InsertFirst(&First,22);
	InsertFirst(&First,33);
	InsertFirst(&First,44);
	InsertFirst(&First,55);
	
	
	Display(First);
	iRet = Count(First);
	printf("The total nodes are:%d\n",iRet);
	
	InsertLast(&First,66);
	InsertLast(&First,77);
	
	Display(First);
	iRet = Count(First);
	printf("The total nodes are:%d\n",iRet);
	
    return 0; 
}
