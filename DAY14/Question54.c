//Write a program to Frequency of an element.
#include<stdio.h>

int main()
{
    int n, arr[100], i, element, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element whose frequency you want to find: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", element, count);

    return 0;
}