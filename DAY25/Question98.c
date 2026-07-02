//Write a program to Find common characters in strings.
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter String 1: ");
 scanf("%s",ch);
 int n=0;
 while(ch[n]!='\0')
 {
    n++;
 }
  char ch1[100];
 printf("Enter String 2: ");
 scanf("%s",ch1);
 int n1=0;
 while(ch1[n1]!='\0')
 {
    n1++;
 }
 int i,j,flag;
 printf("common character in strings\n");
for(i=0;i<n;i++)
{
    flag=0;
    for(j=0;j<i;j++)
    {
        if(ch[i]==ch[j]){
        flag=1;
        break;
        }
    }
    if(flag==0)
    {
     for(j=0;j<n1;j++)
     {
        if(ch[i]==ch1[j])
        {
            printf("%c ",ch[i]);

            break;
        }
     }
    }
}
return 0;
}