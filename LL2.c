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
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next=*head;
		*head = newn;
	}
}
void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		
		while(temp ->next !=NULL)
		{
			temp= temp->next;	
		}
		temp->next = newn;
		
	}
	
}

void Display(PNODE head)
{
	printf("Elements from linked list is:\n");
	
	while(head != NULL)
	{
		printf("|%d|",head->data);
		head=head->next;
	}
	printf("NULL\n");
	
}
int Count(PNODE head)
{
	int iCnt = 0;
	
	while(head != NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
}
void DeleteFirst(PPNODE head)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	if(*head == NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
void DeleteLast(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head == NULL)
	{
		return;
	}
	else if((*head) -> next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp = *head;
		while(temp->next->next != NULL)
		{
			temp = temp -> next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
int main()
{
	PNODE first = NULL;
	int ret = 0;
	
	InsertFirst(&first,55);
	InsertFirst(&first,44);
	InsertFirst(&first,33);
	InsertFirst(&first,22);
	InsertFirst(&first,11);
	
	Display(first);
	
	ret = Count(first);
	printf("The total nodes of LL is:%d\n",ret);
	
	InsertFirst(&first,3);
	InsertLast(&first,66);
	InsertLast(&first,77);
	
	Display(first);
	
	ret = Count(first);
	printf("The total nodes of LL is:%d\n",ret);
	
	DeleteFirst(&first);
	DeleteLast(&first);
	Display(first);
	
	ret = Count(first);
	printf("The total nodes of LL is:%d\n",ret);
	
	return 0;
	
}