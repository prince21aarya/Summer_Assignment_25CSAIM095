
//Write a program to Calculate sum of first N natural numbers.
#include<stdio.h>
 int main(){
    int i, n,sum=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum= sum+i;
    }
    printf("The sum of first n numbers: %d",sum);

    return 0;



 }