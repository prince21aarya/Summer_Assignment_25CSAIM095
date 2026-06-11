// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<stdio.h>
int main()
{
 int i,j,nsp,k,n,a,c;
printf("Enter the no of rows: ");
scanf("%d",&n);
nsp=n-1;
c=65;
for(i=1;i<=n;i++)
{
 for(int q=1;q<=nsp;q++)   
{
    printf(" "); 
}
nsp--;
c=65;
for(j=1;j<=i;j++)
{
 printf("%c",c);
 c++;
}
c=c-2;
for(k=1;k<=i-1;k++)
{
 printf("%c",c);
 c--;
}
printf("\n");
}
return 0;
}