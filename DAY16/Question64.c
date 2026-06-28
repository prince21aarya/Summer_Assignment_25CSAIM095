// Write a program to Remove duplicates from array.
#include <stdio.h>

int main()
{
    int ar[100], n, i, j, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    // Remove duplicates
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(ar[i] == ar[j])
            {
                // Left shift
                for(k = j; k < n - 1; k++)
                {
                    ar[k] = ar[k + 1];
                }

                n--;    // Reduce array size
                j--;    // Check the new element at same index
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}
