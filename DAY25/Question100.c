//Write a program to Sort words by length.
#include<stdio.h>
#include<string.h>
int main()
{
 int n, i, j;
    char words[100][100], temp[100];

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(strlen(words[i])>strlen(words[j]))
        {
        strcpy(temp, words[i]);
        strcpy(words[i], words[j]);
        strcpy(words[j], temp);
        }
    }
}
printf("\nSorts words by length:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}
