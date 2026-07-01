//Write a program to Find maximum occurring character.
#include<Stdio.h>
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
 int max=0;
 int index=0;
for(i=0;i<n;i++)
{
    int count=0;
 for(j=0;j<n;j++)
 {
  if(ch[i]==ch[j])
  {
    count++;
  }
 }

 if(max<count)
 {
    max=count;
    index=i;
 }
}
printf("The most occuring character --> %c",ch[index]);
return 0;
}