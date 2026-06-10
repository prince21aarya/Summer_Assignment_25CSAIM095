//Write a program to Find sum of digits of a number.

#include<stdio.h>
int main(){
     int num,r,n,sum=0;
     printf("ENTER THE NUMBER :  ");
     scanf("%d",&num);
      n=num;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }

    printf("sum of digits of a number %d is %d",num,sum);

    return 0;

}

