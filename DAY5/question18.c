//Write a program to Check strong number.
#include<stdio.h>
int main()
{
int num,n,i,r,sum=0,factorial ;
printf("Enter the number :  ");
scanf("%d",&num);
n=num;
while(n!=0)
{
 r=n%10;
factorial=1;
  for(i=1;i<=r;i++)
  {
    factorial= factorial*i;
  }
  sum= sum+factorial;
  n=n/10;
}
if(sum==num){
    printf("the number is a strong number");
}
else{
    printf("the number is  not strong number");
}
return 0;
}