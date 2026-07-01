//Write a program to Remove duplicate characters.
#include<stdio.h>
int main()
{
 char ch[100];
    printf("Enter string : ");
    scanf("%s", ch);

    int n = 0;
    while(ch[n] != '\0')
    {
        n++;
    }
    int i,j;
for(i=0;i<n;i++)
{
    int flag=0;
 for(j=0;j<i;j++)
 {
    if(ch[i]==ch[j])
    {
        flag=1;
        break;
    }
 }
 if(flag==0)
 
  
  {
    printf("%c",ch[i]);
  }
 
}
return 0;
}