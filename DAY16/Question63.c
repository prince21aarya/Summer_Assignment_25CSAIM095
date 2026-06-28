//Write a program to Find pair with given sum.
#include <stdio.h>

int main() {
    int n,sum,i,j,flag=0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter the sum : ");
    scanf("%d",&sum);
    //for check and find the pair
    for( i=0;i<n;i++)
    {
        flag=0;
        for( j=i+1;j<n;j++)
        {
        if(arr[i]+arr[j]==sum){
             printf("(%d,%d)\n", arr[i], arr[j]);
    
            flag=1;
        }
        }
    }
     if(flag==0)
        {
            printf("no pair ");
        }
    
    return 0;
}