#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int fd = 0;
	int iRet = 0;
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	printf("File is successfully open with FD %d\n",fd);
	
	iRet = read(fd,Data,10);
	
	printf("%d  bytes gets successfully read from file\n",iRet);
	
	printf("Data from file is : %s\n",Data);
	
	return 0;
}