//Write a program to Find GCD of two numbers.

#include<stdio.h>
int main()
{
 int num1,num2,GCD ,temp;
 printf("Enter the 2 numbers :  ");
 scanf("%d%d",&num1,&num2);
while(num2!=0)
{
 temp=num2;
 num2=num1%num2;
 num1=temp;
 
}
GCD=num1;
printf("The gcd of a number = %d",GCD);



return 0;

}