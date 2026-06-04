//Write a program to Reverse a number.

#include<stdio.h>

int main(){
int num,n,reverse=0,r;
printf("ENTER THE NUMBER :  ");
scanf("%d",&num);
 n=num;
while(n!=0){
r=n%10;
 reverse= reverse*10 + r;
 n=n/10;
}

printf("the reverse number of %d is %d",num,reverse);

return 0;



}