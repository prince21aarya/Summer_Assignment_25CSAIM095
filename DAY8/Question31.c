/*Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/
#include<stdio.h>
int main()
{
 int i,j,n,c=65;
 printf("enter the number of rows : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    c=65;
    for(j=1;j<=i;j++)
    {
        
        printf("%c",c);
        c++;
    }

    printf("\n");
 }
 return 0;
}