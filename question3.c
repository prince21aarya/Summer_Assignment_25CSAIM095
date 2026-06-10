//Write a program to Find factorial of a number.

#include<stdio.h>

int main(){
    int  n, factorial=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0){
        factorial=factorial*n;
        n=n-1;
    }
    printf("the factorial of given number is %d",factorial);
    return 0;
}