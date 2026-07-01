//Write a program to Find first non-repeating character.
#include<stdio.h>
int main()
{
char ch[100];
printf("Enter the word : ");
scanf("%s",ch);
int n=0;
while(ch[n]!='\0')
{
    n++;
}
int i,j;
int flag =0;
for(i=0;i<n;i++)
{
   int count =0;
 for(j=0;j<n;j++)
 {
    if(ch[i]==ch[j])
    {
     count++;
    }
 }
 if(count==1)
 {
    flag=1;
    break;
 }
}
if(flag==1)
{
 printf("The first non repeating character --> %c",ch[i]);
}
if(flag==0)
{
    printf("first non repeating character is not found");
}
return 0;
}