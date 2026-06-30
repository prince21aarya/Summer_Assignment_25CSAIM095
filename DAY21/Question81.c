//Write a program to Find string length without strlen().
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter the string : ");
 scanf("%s",ch);    
int i=0;

    while(ch[i] != '\0')
    {
        i++;
    }

printf(" the length of a string is %d",i);
return 0;
 
}