//Write a program to Write function for palindrome.
#include<stdio.h>
int palindrome( int n);
int main()
{
int x;
printf("Enter the number :");
scanf("%d",&x);
if(palindrome(x))
{
    printf("the number is palindrome");
}
else
{
    printf("the number is not palindrome");
}
return 0;
}
int palindrome(int n)
{
 int rev=0,r,n1;
 n1=n;
 while(n1!=0){
    r=n1%10;
    rev=rev*10+r;
    n1=n1/10;
 }
 if(rev==n)
 {
    return 1;
 }
 else{
    return 0;
 }
}