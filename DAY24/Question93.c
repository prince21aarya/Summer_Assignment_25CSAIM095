//Write a program to Check string rotation.
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter string 1 : ");
 scanf("%s",ch);
 int n=0;
 while(ch[n]!='\0')
 {
    n++;
 }
 char ch1[100];
 printf("Enter string 2 : ");
 scanf("%s",ch1);
 int n1=0;
 while(ch1[n1]!='\0')
 {
    n1++;
 }
 if(n1!=n)
 {
 printf("Strings are not rotations.");
 return 0;
}
 
 int i,k,j;
 for(i=0;i<n;i++)
 {
    char temp= ch[n-1];   
    for(k=n-1;k>0;k--)
    {
        
        ch[k]=ch[k-1];
       }
    ch[0]=temp;
    int flag=0;
 for(j=0;j<n;j++)
 {
    if(ch[j]!=ch1[j])
    {
        flag=1;
        break;   
    }
 }
  if(flag==0)
 {
    printf("Strings are rotations.");
    return 0;
 }
}

    printf("Strings are not rotations.");
return 0;
}