//Write a program to Write function for perfect number
#include<stdio.h>
int perfect(int n);
int main()
{
int x;
printf("Enter the number : ");
scanf("%d",&x);
if(perfect(x))
{
    printf("the number is perfect");
}  
else
{
 printf("the number is not perfect");
}
return 0;
}
int perfect(int n)
{
int sum=0;
for(int i=1;i<n;i++)
{
if(n%i==0) 
{
sum=sum +i;
}
}
if(n==sum)
{
 return 1;
}
else{
    return 0;
}
}