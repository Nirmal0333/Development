//initialization and assignment of a structure variable
#include<stdio.h>
struct book
{
	char title[25];
	char author[20];
	int price;
};
int main()
{
	struct book b1={"Cutting Stone","Avraham",200};
	struct book b2=b1;
	struct book b3;
	b3=b2;
	printf("%s by %s is of Rs.%d rupees\n",b1.title,b1.author,b1.price);
	printf("%s by %s is of Rs.%d rupees\n",b2.title,b2.author,b2.price);
	printf("%s by %s is of Rs.%d rupees\n",b3.title,b3.author,b3.price);
}