//Logical AND operator

#include<stdio.h>
int main()
{
  int i=0,j=1,k=2,l;
  l=i&&j++&&k++;
  printf("Resultant values after evaluation are:\n");
  printf("%d%d%d%d",i,j,k,l);
}
