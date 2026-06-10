//Write a program to Print prime numbers in a range.


#include<stdio.h>
int main(){
    int num ,n,i,j,flag=0;
    printf("enter the number of starting range: ");
    scanf("%d",&num);
    printf("enter the number of ending range: ");
    scanf("%d",&n);
     printf("the prime numbers btw %d and %d are\n",num,n);
    for(i=num;1<i && i<=n;i++)
    {
      flag=0;
        for(j=2;j<i;j++)