#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>



int main()
{
	char fname[30];
	int fd = 0;
	char Data[11] = "Marvellous";
	
	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open\n");
		return -1;
	}
	else
	{
		printf("File is successfully opened with fd:%d\n",fd);
	}
	
	
	read(fd,Data,6);
	
	printf("Data form file is:%s\n",Data);
	close(fd);
	
	return 0;
}