#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyCLL
{
   	private:          //Characteristic
	   PNODE Head;
	   PNODE Tail;
	   
	public:           //behaviours
	   SinglyCLL();
	   void InsertFirst(int no);
	   void InsertLast(int no);
	   void InsertAtPos(int no,int ipos);
	   void DeleteFirst();
	   void DeleteLast();
	   void DeleteAtPosLast(int no,int ipos);
	   void Display();
	   int Count();
	  
};
 SinglyCLL::SinglyCLL()
 {
	Head = NULL;
	Tail = NULL;
 }

 void SinglyCLL::InsertFirst(int no)
 {
	 PNODE newn = NULL;
	 
	 newn = new NODE;
	 newn->data = no;
	 newn->next = NULL;
	 
	 if((Head == NULL)&&(Tail == NULL))
	 {
		 Head = newn;
		 Tail = newn;
	 }
	 else
	 {
		 newn->next = Head;
		 Head = newn;
	 }
	 Tail->next= Head;
 }
 
 void SinglyCLL::InsertLast(int no)
 {
	 PNODE newn = NULL;
	 
	 newn = new NODE;
	 newn->data = no;
	 newn->next = NULL;
	 
	 if((Head == NULL)&&(Tail == NULL))
	 {
		 Head = newn;
		 Tail = newn;
	 }
	 else
	 {
		 Tail->next=newn;
		 Tail=newn;
	 }
	 Tail->next= Head;
 }
 
 void SinglyCLL::InsertAtPos(int no,int ipos)
 {}
 
 void SinglyCLL::DeleteFirst()
 {}
 
 void SinglyCLL::DeleteLast()
 {}
 
 void SinglyCLL::DeleteAtPos(int no,int ipos)
 {}
 
 void SinglyCLL::Display()
 {
	 PNODE temp = Head;
	 
	 while(temp != Tail)
	 {
		 cout<<"|"<<temp->data<<"|->";
		 temp = temp->next;
	 }
	 cout<<endl;
	 
	 
 }
 
 
 int SinglyCLL::Count()
 {
   return 0;
 }
int main()
{
	SinglyCLL obj;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.InsertLast(111);
	return 0;
}