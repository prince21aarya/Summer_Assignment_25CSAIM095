//Write a program to Write function to check prime.
#include<stdio.h>
int prime(int n);
int main()
{
int x;
printf("Enter the number to check : ");
scanf("%d",&x);
prime(x);
return 0;
}
int prime( int n)
{
 int i,flag=0;
 
   if(n <= 1)
    {
        printf("The number is not prime");
        
    }
 for(i=2;i<n;i++)
 {
    if(n<=1)
{
    printf("the no is not prime");
}
    if(n%i==0)
    {
     flag=1;
     break;
    }
 }
 
 if(flag==0)
 {
    printf(" the no is prime");
 }
 if(flag==1){
     printf("the no is not prime ");
 }
}
