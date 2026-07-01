//Write a program to Check anagram strings.
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
char ch1[100];
printf("Enter the word : ");
scanf("%s",ch1);
int n1=0;
while(ch1[n1]!='\0')
{
    n1++;
}
if(n1!=n)
{
    printf("Not Anagram");
    return 0;
} 
int i,j;
int flag=0;
for(i=0;i<n;i++)
{ 
    int count1=0, count=0;
 for(j=0;j<n;j++)
 {
  if(ch[i]==ch[j])
  {
   count++;
  }
 }
 for(j=0;j<n;j++)
 {
    if(ch[i]==ch1[j])
    {
        count1++;
    }
 }
 if(count!=count1)
 {
    flag=1;
    break;
 }
}
if(flag==0)
printf(" Is Anagram");
else
printf("Is not anagram");
return 0;

}