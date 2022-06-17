//identifiers and their scopes

#include<stdio.h>
int sum_diff(int a,int b);
int diff;
int main()
{
	int no1,no2,sum;
	printf("Enter two numbers\t");
	scanf("%d%d",&no1,&no2);
	sum=sum_diff(no1,no2);
	printf("Sum is %d\n",sum);
	printf("Diff is %d\n",diff);
}
int sum_diff(int f,int g)
{
	int sum;
	if(f!=g)
		goto label;
	else
	{
		sum=2*f;
		diff=0;
		return sum;
	}
    label:
	sum=f+g;
	diff=f-g;
	return sum;
}