//Write a program to Find diagonal sum.
#include<stdio.h>
int main()
{
 int n,n1,i,j;
printf("Enter  row size : ");
scanf("%d",&n);
printf("Enter  column size : ");
scanf("%d",&n1);
int a[n][n1];
printf("Enter the element : \n");
for(i=0;i<n;i++)
{
 for(j=0;j<n1;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
int sum=0;
//for daigonal sum
for(i=0;i<n;i++)
{
 for(j=0;j<n1;j++)
 {
    if(i==j)
    {
      sum=sum+a[i][j];
    }
 }
}
printf("the diagonal sum -> %d",sum);
return 0;
}