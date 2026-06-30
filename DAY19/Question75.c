//Write a program to Transpose matrix.
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
//for transpose
printf("Transpose Matrix:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
