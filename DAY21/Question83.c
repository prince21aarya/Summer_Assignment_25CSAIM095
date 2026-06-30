//Write a program to Count vowels and consonants.
#include<stdio.h>
int main()
{
 char ch[100];
 printf("Enter the string : ");
 scanf("%s",ch);
 int n=0,i;

    while(ch[n] != '\0')
    {
        n++;
    }
    int vowel=0,consonant=0;
 for(i=0;i<n;i++)
 {
  if(ch[i]=='A' || ch[i]=='E'|| ch[i]=='O' || ch[i]=='I' || ch[i]=='U'||
     ch[i]=='a' || ch[i]=='e'|| ch[i]=='o' || ch[i]=='i' || ch[i]=='u')
     {
       vowel++;
     }
 
 else{
      if(ch[i]>='A' || ch[i]<='Z' ||
         ch[i]>='A' || ch[i]<='z')
          {
            consonant++;
          }
 }
 }
 printf("the count of \n ");
 printf("vowels : %d",vowel);
 printf("\nconsosant : %d",consonant);
}