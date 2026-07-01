//Write a program to Find longest word.
#include<stdio.h>

int main()
{
    char ch[100];
    printf("Enter a sentence: ");
    fgets(ch, sizeof(ch), stdin);

    int i;
    int count = 0, max = 0;
    int start = 0, index = 0;

    for(i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] != ' ' && ch[i] != '\n')
        {
            count++;
        }
        else
        {
            if(count > max)
            {
                max = count;
                start = index;
            }

            count = 0;
            index = i + 1;
        }
    }

    // Last word ke liye
    if(count > max)
    {
        max = count;
        start = index;
    }

    printf("Longest word --> ");

    for(i = start; i < start + max; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}