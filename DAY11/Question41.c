//Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int x,int y);
int main()
{
 int a,b;
 printf("Enter the number 1 :  ");
 scanf("%d",&a);
 printf("Enter the number 2 :  ");
 scanf("%d",&b);
 printf("the sum of number %d and %d is %d",a,b,sum(a,b));
 return 0;
}
int sum(int x ,int y)
{
 int c;
 c=x+y;
 return c;

}