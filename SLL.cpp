#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
	int Data;
	node *Next;
};
typedef struct node NODE;
typedef struct node *PNODE;

class Singly_linkedList
{
	private:
	   PNODE Head;
	
	public:
	   Singly_linkedList();
	   ~Singly_linkedList();
	   BOOL InsertFirst(int);
	   BOOL InsertLast(int);
	   BOOL InsertAtPosition(int,int);
	   inline void Display();
	   inline int Count();
	   BOOL DeleteFirst();
	   BOOL DeleteAtPosition(int);
	   BOOL DeleteLast();

};

Singly_linkedList :: Singly_linkedList()
{
	Head = NULL;
}

Singly_linkedList:: ~Singly_linkedList()
{
	PNODE Temp,Navigate;
	
	if(Head != NULL)
	{
		Navigate = Head;
		 while(Navigate != NULL)
		 {
			 Temp = Navigate->Next;
			 delete Navigate;
			 Navigate = Temp;
		 }
			 
	}
}

BOOL Singly_linkedList :: InsertFirst(int no)
{
	PNODE newn = NULL;
	
	newn = new NODE;
	if(newn == NULL)
	{
		return FALSE;
	}
	
	newn->Next = NULL;
	newn->Data = no;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		newn->Next = Head;
		Head = newn;
	}
	return TRUE;
}

BOOL Singly_linkedList :: InsertLast(int no)
{
	PNODE newn = NULL,temp = Head;
	newn = new NODE;
	
	if(newn == NULL)
	{
		return FALSE;
	}
	
	newn->Next = NULL;
	newn->Data = no;
	
	if(Head == NULL)
	{
		Head = newn;
	}
	else
	{
		while(temp->Next != NULL)
		{
			temp = temp->Next;
		}
		temp->Next = newn;
	}
	
}

BOOL Singly_linkedList :: InsertAtPosition( int pos,int no)
{
	if((Head == NULL) || (pos>Count()+1) || (pos<=0))
	{
		return FALSE;
	}
	if(pos == 1)
	{
		return(InsertFirst(no));
	}
	else if(pos == (Count())+1)
	{
		return(InsertLast(no));
	}
	else
	{
		PNODE newn = NULL,temp = Head;
		
		newn = new NODE;
		if(newn == NULL)
		{
			return FALSE;
		}
		
		newn->Next = NULL;
		newn->Data = no;
		
		for(int i=1;i<=(pos-2);i++)
		{
			temp = temp->Next;
		}
		newn->Next = temp->Next;
		temp->Next = newn;
	}
	return TRUE;
}

BOOL Singly_linkedList:: DeleteFirst()
{
	PNODE temp = Head;
	
	if(Head == NULL)
	{
		return FALSE;
	}
	else
	{
		Head = Head->Next;
		free(temp);
	}
	return TRUE;
}

BOOL Singly_linkedList::DeleteLast()
{
	if(Head == NULL)
	{
		return FALSE;
	}
	else if(Head->Next == NULL)
	{
		delete Head;
		Head = NULL;
	}
	else
	{
		PNODE temp1 = Head,temp2 = NULL;
		
		while(temp1->Next->Next!=NULL)
		{
			temp1=temp1->Next;
		}
		
		temp2 = temp1->Next;
		temp1->Next=NULL;
		free(temp2);
	}
	return TRUE;
}
	   
BOOL Singly_linkedList::DeleteAtPosition(int pos)
{
	if((Head == NULL) || (pos>Count()) || (pos<=0))
	{
		return FALSE;
	}
	else if(pos == 1)
	{
		DeleteFirst();
	}
	else if(pos == (Count()))
	{
		DeleteLast();
	}
	else
	{
		PNODE temp1 = Head,temp2 = NULL;
		
		for(int i =1;i<=(pos-2);i++)
		{
			temp1 = temp1->Next;
			++i;
		}
		temp2 = temp1->Next;
		temp1->Next = temp2->Next;
		
		delete temp2;
	}
	return TRUE;
}

void Singly_linkedList :: Display()
{
	PNODE Temp = Head;
	
	while(Temp != NULL)
	{
		cout<<Temp->Data<<"->";
		Temp = Temp->Next;
	}
	cout<<"NULL\n";
}
	   
int Singly_linkedList::Count()
{
	PNODE Temp = Head;
	int iCnt = 0;
	
	while(Temp != NULL)
	{
		iCnt++;
		Temp = Temp->Next;
	}
	return iCnt;
}