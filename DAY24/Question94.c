//Write a program to Compress a string.
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

    int i;
    int count = 1;

    printf("Compressed string --> ");

    for(i = 0; i < n-1; i++)
    {
        if(ch[i] == ch[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d", ch[i], count);
            count = 1;
        }
    }

    // Last character print
    printf("%c%d", ch[n-1], count);

    return 0;
}