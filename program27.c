//1   gram 4000
//2   gram 8000
//5   gram 20000
//10  gram 40000

#include<stdio.h>


void JwelersPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:
		printf("Your bill amout is 4000\n");
		break;
	
		case 2:
		printf("Your bill amout is 8000\n");
		break;
	
		case 5:
		printf("Your bill amout is 20000\n");
		break;
		
		case 10:
		printf("Your bill amout is 40000\n");
		break;
		
		default:
		printf("Invalid weight\n");
		break;
		
	}
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter the gold coin size\n");
	scanf("%d",&iValue);
	
	JwelersPortal(iValue);
	
	
	
	return 0;
}