//Write a program to Rotate array left.
#include<stdio.h>
int main()
{
 int arr[100],n;
 printf("enter the number of rows:");
 scanf("%d",&n);
 printf("enter the elements of an array : \n");
 for(int i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("orginal array is : ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);

printf("\n");
 //for rotate an elment in left side
 int temp=arr[0];
 for(int i=0;i<n;i++)
 {
    arr[i]=arr[i+1];
 }
arr[n-1]=temp;
printf("rotated array is : ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);

return 0;
}

