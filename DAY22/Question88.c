
//Write a program to Remove spaces from string.
#include<stdio.h>

int main()
{
    char ch[100];
    int i, j = 0;

    printf("Enter the string : ");
    fgets(ch, sizeof(ch), stdin);

    for(i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] != ' ')
        {
            ch[j] = ch[i];
            j++;
        }
    }

    ch[j] = '\0';

    printf("String after removing spaces : %s", ch);

    return 0;
}