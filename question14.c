//Write a program to Find nth Fibonacci term

#include<stdio.h>

int main()
{
int a=0,b=1,sum ,i,n;

printf("Enter the number of terms : ");
scanf("%d",&n);
  printf("%d %d",a,b);
 for(i=1;i<=n;i++)
 {
    sum=a+b;
    printf(" %d",sum);
    a=b;
    b=sum;

 }
 printf("\nThe nth term of fibonacci series is %d",b);
return 0;

}