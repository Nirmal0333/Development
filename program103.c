/*: Row6 Columns 6

* 
* * 
* * * 
* * * *
*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
	int i = 0, j = 0;
	if(iRow!=iCol)
	{
		return;
	}
    for(i = 1 ; i<=iRow ; i++)
	{
		for(j = 1; j<=i;j++)
	    {
			 printf("*\t");
		}
		 
		
		printf("\n");
	}
	
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Eenter number of rows:\n");
	scanf("%d",&iValue1);
    
	printf("Eenter number coloumns:\n");
	scanf("%d",&iValue2);
	
    Display(iValue1,iValue2);	
	
	return 0;
}