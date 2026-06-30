//Write a program to Count words in a sentence.
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter the sentence : ");
 fgets(ch, sizeof(ch), stdin);
 int n=0;

    while(ch[n] != '\0')
    {
        n++;
    }
int word=0;
for( int i=0;i<n;i++)
{
 if(ch[i]!=' ' && (i==0 ||ch[i-1]==' '))
 {
    word++;
 }
}
printf("the no of words is %d",word);
return 0;
}