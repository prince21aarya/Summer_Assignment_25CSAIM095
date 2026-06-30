//Write a program to Character frequency.
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
printf("character frequency-->\n");
for( int i=0;i<n;i++)
{ int flag=0;
    for(int j = 0; j < i; j++)
        {
            if(ch[i] == ch[j])
            {
                flag = 1;
                break;
            }
        }

    if(flag==0)
    {
        int count=0;
    for(int j=0;j<n;j++)
    {
     if(ch[i]==ch[j]){
     count++;
    }
    }
    printf("%c :%d\n",ch[i],count);
}
}
return 0;
}