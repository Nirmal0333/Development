#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];
	char Data[100];
	int iRet = 0;
	
	int fd = 0;
	
	printf("Enter file name to create\n");
	scanf("%s",Fname);
	
	printf("Enter the data that you want to write \n");
	scanf(" %[^'\n']s",Data);
	
	fd = creat(Fname,0777);
	if(fd == -1)
	{
		printf("Unable to create the file\n");
		return -1;
	}
	
	printf("File is successfully created with FD %d\n",fd);
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d bytesuccessfully written in the file\n",iRet);
	
	return 0;
}