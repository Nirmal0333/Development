#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

void DisplayData(char Fname[])
{
	int fd = 0;
	int iRet = 0;
	char Data[20];
	
	fd = open(Fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return;
	}
	
	printf("File is successfully opend with FD %d\n",fd);
	
	while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        write(1,Data,iRet);
    }

    close(fd);
	

}
int main()
{
	char Fname[20];
	
	
	
	printf("Enter file name to open\n");
	scanf("%s",Fname);
	
	DisplayData(Fname);
	
	return 0;
	
}