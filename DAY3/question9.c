//Write a program to Check whether a number is prime.
#include<stdio.h>
int main(){
    int num,i,flag=0;
    printf("enter the number : ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
      if(num%i==0){
        flag =1;
        break;
      }
    }
    if(flag==0){
        printf("a number is prime number");
    }
     else if(flag==1){
        printf("a number is not prime number");
    }

    return 0;
}