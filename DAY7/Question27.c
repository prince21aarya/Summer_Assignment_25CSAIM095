//Write a program to Recursive sum of digits.
#include<stdio.h>
int sum(int n);
int main()
{
 int x, result;
 printf("Enter the number: ");
 scanf("%d",&x);
 result= sum(x);
 printf("sum of a digits is %d ",result);
return 0;
}
int sum(int n)
{
    int t=n,c;
 if(n==0)
 {
    return 0;
 }
 if(n==1){
    return 1;
 }
 else {
     c=n%10;
     return c+ sum(n/10);
 }
}