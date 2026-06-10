#include<stdio.h>
int main()
{
 int a,b,c=1,b1;
 printf("enter the base no. :  ");
 scanf("%d",&a);
 printf("Enter the power : ");
 scanf("%d",&b);
b1=b;
 while(b!=0)
 {
   c=c*a;
   b--;
 }
 printf("the %d^%d is %d",a,b1,c);
 return 0;
}