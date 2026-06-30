//Write a program to Find column-wise sum.
#include<stdio.h>
int main()
{
 int n,n1,i,j;
 printf("Enter row size : ");
 scanf("%d",&n);
 printf("Enter column size : ");
 scanf("%d",&n1);
 int a[n][n1];
 printf("Enter the elments --->\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n1;j++)
  {
    scanf("%d",&a[i][j]);
  }
 }
 //for row wise sum
 printf("row wise sum\n");
 for(j=0;j<n1;j++)
 {
  int sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i][j];
  }
  printf("sum of column %d : %d\n",j+1,sum);
 }
 return 0;
}