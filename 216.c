//open file in read mode

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	int fd = 0;
	
	printf("Enter the file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	printf("File is succssfully opend with FD %d\n",fd);
	
	return 0;
}