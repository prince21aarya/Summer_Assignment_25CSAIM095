//Write a program to Find product of digits.
#include<stdio.h>
int main(){
     int num,r,n,product=1;
     printf("ENTER THE NUMBER :  ");
     scanf("%d",&num);
      n=num;
      while(n!=0)
      {
        r=n%10;
        product=product*r;
        
        n=n/10;
      }
     printf(" product of digits of %d is %d",num,product); 
     return 0;
    }