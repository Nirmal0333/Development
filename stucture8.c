//Array of structure
#include<stdio.h>
#include<conio.h>
#define MAXBOOKS 10
struct book
{
	char title[30];
	char author[30];
	int pages;
	float price;
};
int main()
{
	struct book library[MAXBOOKS];
	int count=0,i;
	char ch;
	while(1)
	{
		printf("Enter the information of book %d:\n",count+1);
		printf("Enter the title of the book:\t");
		gets(library[count].title);
		printf("Enter the author's name:\t");
		gets(library[count].author);
		printf("Enter the number of pages in the book:\t");
		scanf("%d",&library[count].pages);
		printf("Enter the price of the book:\t");
		scanf("%f,&library[count].price");
		
		count++;
		if(count==MAXBOOKS)
		{
			printf("Capacity full\n");
			break;
		}
		else
		{
			printf("Do you want to enter more(Y/N):\t");
			ch=getche();
			printf("\n");
			if(ch=='y'||ch=='Y')
				continue;
			else
				break;
		}
}
printf("\nFollowing are the books in the library:\n\n");
for(i=0;i<count;i++)
{
	printf("%s by %s:%d pages is of Rs. %6.2f\n",library[i].title, library[i].author, library[i].pages, library[i].price);
}
}