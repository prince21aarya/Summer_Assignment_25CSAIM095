//Write a program to Write function to find maximum.
#include<stdio.h>
int max(int a,int b,int c);
int main()
{
 int x,y,z;
 printf("Enter the number 1 :  ");
 scanf("%d",&x);
 printf("Enter the number 2 :  ");
 scanf("%d",&y);
 printf("Enter the number 3 :  ");
 scanf("%d",&z);
 printf("the maximum number is  %d ", max(x,y,z));
 return 0;
}
int max(int a,int b,int c)
{
 if(a>b && a>c){
    return a;
 }
 if(b>a && b>c){
    return b;
 }
 if( c>a && c>b);
  return c;
}
