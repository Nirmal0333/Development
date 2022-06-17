//Program to display hello using loops

include<stdio.h>
void Display(int iNo) 

{
	int iCnt=0;
  
  if(iNo < 0)
  {
	  printf("Please enter positive number\n");
	  return;
  }
  
  for(iCnt=0;iCnt<iNo;iCnt++)
   
  printf("Hello\n");
	  
}
int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue); //Function call
	
	return 0;
}
