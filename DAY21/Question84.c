//Write a program to Convert lowercase to uppercase.
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
for(int i=0;i<n;i++)
{
ch[i]=ch[i]-32;
}   
printf("Upper case : %s",ch);
return 0;
}