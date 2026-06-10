
//Write a program to Count digits in a number.
#include<stdio.h>
int main(){
    int n,n1,c=0;
    printf("enter the number :  ");
    scanf("%d",&n);
    n1=n;
    while(n!=0){
        n=n/10;
        c=c+1;
    }

    printf("The no of digit in number %d is %d",n1,c);
    return 0;
}