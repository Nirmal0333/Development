#include<stdio.h>
int CountChar(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		CountChar(str);
	}
	return iCnt;

}
int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter string\n");
	 scanf("%[^'\n']s",arr);
	
	iRet = CountChar(arr);
	
	printf("%d",iRet);
	
	return 0;
}