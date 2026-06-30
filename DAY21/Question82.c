//Write a program to Reverse a string.
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter the string : ");
 scanf("%s",ch);
 int n=0;

    while(ch[n] != '\0')
    {
        n++;
    }
for( int i=0;i<n/2;i++)
{
  int temp=ch[i];
  ch[i]=ch[n-1-i];
  ch[n-1-i]=temp;
}
printf("the reversed string -->  %s",ch);
return 0;
}