//Write a program to Write function for Fibonacci.
#include<stdio.h>
int fibonacci(int n);
int main()
{
  int x;
  printf("Enter the number : ");
  scanf("%d",&x);
  fibonacci(x);
  return 0;
}
 int fibonacci(int n)
 {
  int a=0, b=1,c,i;
  printf("%d %d ",a,b);
  for(i=1;i<=n;i++)
  {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
 }