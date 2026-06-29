//Write a program to Bubble sort.
#include<stdio.h>
int main()
{
 int i,j,n; 
 printf("Enter the size : ");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements : ");
 for(i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
//for bubble sort
for (i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
    if(arr[j]>arr[j+1])
    {
    int temp=arr[j+1];
    arr[j+1]=arr[j];
    arr[j]=temp;
    }
}
}
printf("sorted array : ");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}