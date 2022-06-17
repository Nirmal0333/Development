#include<stdio.h>
int main()
{
	int no = 11;
	char ch = 'N';
	printf("%d\n",no);
	printf("%c\n",ch);
	printf("%u\n",&no);
	printf("%u\n",&ch);
	printf("%d\n",sizeof(no));
	printf("%d\n",sizeof(ch));
	
	return 0;
}