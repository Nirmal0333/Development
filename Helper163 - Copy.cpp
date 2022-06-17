#include "Header163.h"


DoublyCLL :: DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	CountNode = 0;
}
void DoublyCLL ::  InsertFirst(int iNo)
{
	PNODE newn = NULL;
	newn = new NODE;
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(CountNode == 0)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn->next = Head;
		Head->prev = newn;
		head = newn;
	}
	
	Head->prev = Tail;
	Tail->next = Head;
	
	CountNode++;
}

void DoublyCLL ::  InsertLast(int iNo)
{
	PNODE newn = NULL;
	newn = new NODE;
	
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(CountNode == 0)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail->next = newn;
		newn->prev = Tail;
		
	}
	
	Head->prev = Tail;
	Tail->next = Head;
	
	CountNode++;
	
}

void DoublyCLL ::  InsertAtPos(int iNo, int iPos)
{
	if((iPos < 1) || (iPos > CountNode+1)
	{
		cout<<"Invalid position\n";
		return;
	}
}

void DoublyCLL :: DeleteFirst()
{
	if(CountNode == 0)
	{
		return;
	}
	else if(CountNode == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->next;
		delete Tail->next;
		
		Tail->next = Head;
		Head->prev = Tail;
	}
	
	CountNode--;
}

void DoublyCLL :: DeleteLast()
{
		if(CountNode == 0)
	{
		return;
	}
	else if(CountNode == 1)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Tail = Tail->prev;
		delete Tail->next; 
		
	}
	
	Tail->next = Head;
	Head->prev = Tail;
	CountNode--;
}

void DoublyCLL :: DeleteAtPos(int iPos)
{}

void DoublyCLL :: Display()
{
	int i = 0;
	PNODE temp = Head;
	
	for(i =1 ; i<=CountNode;i++)
	{
		cout<<"|"<<->temp->data<<"|->";
		temmp = temp -> next;
	}
	cout<<"\n";
}

int DoublyCLL :: Count()
{
	return CountNode;
}


