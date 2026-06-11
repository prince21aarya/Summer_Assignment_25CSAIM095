//Write a program to Write function to find factorial.
#include<stdio.h>
int factorial(int n);
int main()
{
int a,c;
printf("Enter the number : ");
scanf("%d",&a);
c=factorial(a);
printf("the facotial of a given number is %d",c);

}
int factorial(int n)
{
 int fact=1;
 while(n!=0)
 {
   fact=fact*n;
   n--;
 }
 return fact;
}
