// //Write a program to Print reverse star pattern.
// *****
// ****
// ***
// **
// *
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
        printf("*");
    }
    printf("\n");
 }
 return 0;
}