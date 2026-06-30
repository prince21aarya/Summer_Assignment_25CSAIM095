//Write a program to Check palindrome string.
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
     char ch1[n+1];
for( int i=0;i<n;i++)
{
  ch1[i]=ch[n-1-i];
}
ch1[n] = '\0';
int flag=0;
for(int i=0;i<n;i++)
{
 if(ch[i]!=ch1[i])
 {
    flag=1;
    break;
 }
}
printf("%s\n",ch1);
if(flag==0)
{
    printf("the string is palindrome");
}
else
    printf("the string is not palindrome");
return 0;
}