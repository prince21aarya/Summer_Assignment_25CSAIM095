// Write a program to Print reverse number triangle.

// 12345
// 1234
// 123
// 12
// 1
#include<stdio.h>
int main()
{
 int i,j,n;
 printf("enter the number of rows : ");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
    for(j=n;j>i;j--)
    {
        printf("%d",n-(j-1));
    }
    printf("\n");
 }
 return 0;
}