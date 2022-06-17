#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyLL
{
    public:
        struct node<T> *Head;
        int Count;

        SinglyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void Display();
        int CountNode();
		void DeleteFirst();
		void DeleteLast();
		void InsertAtPos(T no, T pos);
		void DeleteAtPos(T pos);
};

template<class T>
SinglyLL<T>::SinglyLL()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void SinglyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn -> next = Head;
        Head = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
            struct node<T> *temp = Head;
            while(temp->next != NULL)
            {
                temp = temp -> next;
            }

            temp->next = newn;
    }
    Count++;
}

template<class T>
void SinglyLL<T> :: DeleteFirst()
{
	struct node<T> *newn = NULL;
	struct node<T> *temp = NULL;
	
	if(*Head == NULL)
	{
		return;
	}
	else
	{
		temp = *Head;
		*Head = temp->next;
		delete temp;
	}
	Count++;
}
		
template<class T>
void SinglyLL<T> :: DeleteLast()
{
	struct node<T> *temp = NULL;
	
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head) -> next == NULL)
	{
		delete *Head;
		*Head = NULL;
	}
	else
	{
		temp = *Head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	Count++;
	
}

template<class T>
void SinglyLL<T> :: InsertAtPos(T no, T pos)
{
	int size = 0,iCnt = 0;
	struct node<T> *temp = NULL;
	struct node<T> *newn = NULL;
	
	size = Count(*Head);
	
	if((pos < 1) || (pos > (size + 1)))
	{
		cout<<"Position is invalid"<<endl;
		return;
	}
	
	if(pos == 1)
	{
		InsertFirst( no);
	}
	else if(pos == (size + 1))
	{
		InsertLast(no);
	}
	else
	{
		newn = NULL;
		
		newn -> data = no;
		newn -> next = NULL;
		
		temp = *Head;
		
		for(iCnt = 1; iCnt < pos-1;iCnt++)
		{
			temp = temp -> next;
		}
		
		newn->next = temp ->next;
		temp ->next = newn;
	}
	Count++;
	
}

template<class T>
void SinglyLL <T>:: DeleteAtPos(T pos)
{
    int size = 0,iCnt = 0;
	struct node<T> *temp = NULL;
	struct node<T> *tempdelete = NULL;
	
	size = Count(*Head);
	
	if((pos < 1) || (pos > (size)))
	{
		cout<<"Position is Invalid"<<endl;
	}
	
	if(pos ==1)
	{
		DeleteFirst();
	}
	else if(pos == (size))
	{
		DeleteLast();
	}
	else
	{
	    temp = *Head;
		
		
		
		for(iCnt = 1; iCnt < pos-1;iCnt++)
		{
			temp = temp->next;
		}
		
		tempdelete = temp->next;
		temp->next = temp->next->next;
		delete tempdelete;
	}

	
	
	
}

template<class T>
void SinglyLL<T>::Display()
{
    cout<<"Elements from Linked list are : "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int SinglyLL<T>::CountNode()
{
    return Count;
}
int main()
{
    SinglyLL <int>obj1;
    SinglyLL <float>obj2;
	

    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(51);
    obj1.InsertLast(101);
    obj1.InsertAtPos(3, 108);
    
	
	
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;
	
	
	
	
	obj2.InsertFirst(21.11);
    obj2.InsertFirst(11.11);
    obj2.InsertLast(51.11);
    obj2.InsertLast(101.11);

    obj2.Display();
    cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;
    
	return 0;
}