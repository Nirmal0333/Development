// size of file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int FileSize(char Fname[])
{
    int fd = 0;    
    int iRet = 0;
    char Data[10];     
	int iSum = 0;

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;  
    }
    
	printf("File is succefully opened with FD %d\n",fd);

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        iSum = iSum + iRet;
    }
    
	close(fd);
	return iSum;
}

int main()
{
    char Fname[20];
	int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = FileSize(Fname);
	printf("File Size is : %d\n",iRet);

    return 0;
}