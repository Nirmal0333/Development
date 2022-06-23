#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
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
	
	printf("Enter the data that you want to write\n");
	scanf("%d[^'\n']s",Data);
	
	fd=creat(Fname,0777);
	
	if(fd == -1)
	{
		printf("Enable to create file\n");
		return -1;
	}
	
	printf("File is successfully created with FD %d\n",fd);
	
	iRet = write(fd,Data,strlen(Data));
	printf("%d byte successfully written in the file\n",iRet);
	
	return 0;
}