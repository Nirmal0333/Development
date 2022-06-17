//counting the number of sentences, words and characters in a given paragraph

#include<stdio.h>
int main()
{
	char paragraph[1000];
	int i=0,sentence=0,word=0,chs=0;
	printf("Enter the text:\n");
	scanf("%[^\n]",paragraph);
	while(paragraph[i]!='\0')
	{
		switch(paragraph[i])
		{
			case'!':
			case'.':
			case'?':
			sentence++;
			chs++;
			break;
			case' ':
			case'\t':
			chs++;
			word++;
			break;
			default:
			chs++;
		}
		i++;
	}
	printf("\nNumber of sentences in paragraph are %d\n",sentence);
	printf("Number of words in paragraph are %d\n",word+1);
	printf("Number of characters in paragraph are %d\n",chs);
}