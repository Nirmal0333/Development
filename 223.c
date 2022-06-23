

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int CntWhiteSpace(char Fname[])
{
    int fd = 0, iRet = 0, i =0,iCnt = 0;
    char Data[1024];

    fd = open(Fname,O_RDWR);
    if(fd == -1)
    {

        printf("Unable to open the file\n");
        return -1; 
    }

    while((iRet = read(fd,Data,sizeof(Data))) != 0)
    {
        for(i = 0; i< iRet; i++)
        {
            if(Data[i] == ' ')
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = CntWhiteSpace(Fname);
    printf("Number of white space are : %d\n",iRet);

    return 0;
}