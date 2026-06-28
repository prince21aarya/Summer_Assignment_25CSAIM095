//Write a program to Rotate array right.
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
 //for rotate an elment in right side
 int temp=arr[n-1];
 for(int i=n-1;i>0;i--)
 {
    arr[i]=arr[i-1];
 }
arr[0]=temp;
printf("rotated array is : ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);

return 0;
}

