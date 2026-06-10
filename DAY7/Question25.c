//Write a program to Recursive factorial
#include<stdio.h>
 int factorial( int x);
int main()
{
 int c,n;
 printf("enter the number : ");
 scanf("%d",&n);
  c=  factorial(n);
 printf("the factorial is : %d",c);
 return 0;
}
 int factorial( int x)
{
 if(x==0)
   return 1;
 else 
 {
    return x* factorial(x-1) ;
 }
}