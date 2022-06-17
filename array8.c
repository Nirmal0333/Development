//Dynamic Array

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int *array,num,i,sum=0;
	float avg;
	printf("How many students have appeared in the examination?\t");
	scanf("%d",&num);
	array=(int*)malloc(num*sizeof(int));
	if(array==NULL)
	{
		printf("Memory allocation failed.Program cannot proceed\n");
		exit(1);
	}
	else
	{
		printf("Enter the marks of %d students:\n",num);
		for(i=0;i<num;i++)
			scanf("%d",(array+i));
		for(i=0;i<num;i++)
			sum+=*(array+i);
		avg=(float)sum/num;
		printf("Sum of marks of all the studnents is %d\n",sum);
		printf("Average of marks secured are %f",avg);
	}
}