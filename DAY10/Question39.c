// Write a program to Print number pyramid.
//     1
//    121
//   12321
//  1234321
// 123454321
#include<stdio.h>
int main()
{
 int i,j,nsp,k,n,a;
printf("Enter the no of rows: ");
scanf("%d",&n);
nsp=n-1;
for(i=1;i<=n;i++)
{
 for(int q=1;q<=nsp;q++)   
{
    printf(" "); 
}
nsp--;
for(j=1;j<=i;j++)
{
 printf("%d",j);
}
a=i-1;
for(k=1;k<=i-1;k++)
{
 printf("%d",a);
 a--;
}
printf("\n");
}
return 0;
}