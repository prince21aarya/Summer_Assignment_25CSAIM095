//Write a program to Selection sort.
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
 //selection sort
 for(i=0;i<n-1;i++)
 {
    int min=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[min]>arr[j])
        {
            min=j;
        }
    }
   int temp=arr[i];
   arr[i]=arr[min];
   arr[min]=temp;   
 }
 printf("sorted array : ");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
 return 0;
}