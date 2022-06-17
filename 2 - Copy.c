void DeleteAtPos(PPNODE head , int no)
{
	int size = 0,iCnt = 0;
	PNODE temp = NULL;
	PNODE tempdelete = NULL;
	
	size = Count(*head);
	
	if((pos<1)||(pos>(size)))
	{
		printf("Invalid Input\n");
		return;
	}
	
	if(pos == 1)
	{
		DeleteFirst(head);
	}
	else if(pos == (size))
	{
		DeleteLast(head);
	}
	else
	{
		temp = *head;
		
		for(iCnt = 1; iCnt<pos-1;iCnt++)
		{
			temp = temp->next;
		}
		tempdelete = temp ->next;
		temp->next = temp->next->next;
		free(tempdelete);
	}
}