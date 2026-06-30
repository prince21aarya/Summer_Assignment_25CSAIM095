//Write a program to Add matrices.
#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter size  : ");
scanf("%d",&n);
int a[n][n],b[n][n];
printf("matrix 1->>\n");
printf("Enter the elements :\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    scanf("%d",&a[i][j]);
 }
}
printf("matrix 2->>\n");
printf("Enter the elements :\n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    scanf("%d",&b[i][j]);
 }
}
int c[n][n];
//for add matrics
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    c[i][j]=a[i][j]+b[i][j];
 }
}
printf("sum of 2 matrics: \n");
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    printf("%4d ",c[i][j]);
 }
 printf("\n");
}
return 0;
}