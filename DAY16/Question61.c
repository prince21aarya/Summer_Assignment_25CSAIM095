//Write a program to Find missing number in array.
#include<stdio.h>
int main()
{
 int arr[100],n,sum=0;
printf("Enter size: ");
scanf("%d", &n);
  printf("Enter elements :\n");
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
 //to find missing element
 int total=n*(n+1)/2;
printf("The missing element : %d",total-sum);
return 0;
}