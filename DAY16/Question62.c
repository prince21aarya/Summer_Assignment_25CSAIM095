//Write a program to Find maximum frequency element.
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

    int max=0;
    for(i = 0; i < n; i++)
    {
       count=1; 
       for(int j=i+1;j<n;j++)
       {
        if(arr[i]==arr[j])
        {
            count++;
        }
       }
       if(count>max)
       {
        max=count;
        element=arr[i];
       }
    }
printf("the maximum frequency element :%d with count: %d",element ,max);
return 0;
}    