//Write a program to Check symmetric matrix.
#include<stdio.h>
int main()
{
 int n,i,j;
 printf("Enter  size : ");
 scanf("%d",&n);
 int a[n][n];
 printf("enter the element:-->\n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[i][j]);
  }
 }
int b[n][n];
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
    b[i][j]=a[j][i];
 }
}
int flag = 1;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(a[i][j] != b[i][j])
        {
            flag = 0;
            break;
        }
    }
}
if(flag==1)
{
 printf("The input matrix is symmetric");
}
else{
    printf("The input matrix is not symmetric");
}
return 0;
}