//dynamic two dimensional array
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main()
{
	int *mat1,*mat2,*resultant;
	int rows1,cols1,rows2,cols2,i,j,k;
	printf("Enter the order of first matrix;\n");
	scanf("%d%d",&rows1,&cols1);
	printf("Enter the order of second matrix:\n");
	scanf("%d%d",&rows2,&cols2);
	if(cols1!=rows2)
	{
		printf("Matrix multiplication is not compatilble\n");
		exit(1);
	}
	else
	{
		mat1=(int*)malloc(rows1*cols1*sizeof(int));
		mat2=(int*)malloc(rows2*cols2*sizeof(int));
		resultant=(int*)calloc(rows1,cols2*sizeof(int));
		if(mat1==NULL||mat2==NULL||resultant==NULL)
		{
			printf("There is some problem in memory allocation\n");
			exit(1);
		}
		else
		{	
			printf("Enter the elements of first %d*%d matrix:\n",rows1,cols1);
			for(i=0;i<rows1;i++)
			{
				for(j=0;j<cols1;j++)
				   scanf("%d",&mat1[i*cols1+j]);
			   printf("\n");
			}
			printf("Enter the elements of second%d*%d matrix:\n",rows2,cols2);
			for(i=0;i<rows2;i++)
			{
				for(j=0;j<cols2;j++)
					scanf("%d",&mat2[i*cols2+j]);
				printf("\n");
				
			}
				for(i=0;i<rows1;i++)
					for(j=0;j<cols2;j++)
						for(k=0;k<cols1;k++)
							resultant[i*cols2+j]+=mat1[i*cols1+k] *mat2[k*cols2+j];
						printf("The result of matrix multiplication is:\n");
						for(i=0;i<rows1;i++)
						{
							for(j=0;j<cols2;j++)
								printf("%d",resultant[i*cols2+j]);
							printf("\n");
						}
			            free(mat1);free(mat2);free(resultant);
        }          
	}	
}