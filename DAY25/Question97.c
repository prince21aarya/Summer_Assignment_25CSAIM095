//Write a program to Merge two sorted arrays.
#include<stdio.h>
int main()
{
 int n1,n2,i,j;
 printf("Sorted Array 1-->\n");
 printf("Enter the size : ");
 scanf("%d",&n1);
 int arr1[n1];
 printf("Enter the elements :\n");
 for(i=0;i<n1;i++)
 scanf("%d",&arr1[i]);
 printf("Sorted Array 2-->\n");
 printf("Enter the size : ");
 scanf("%d",&n2);
 int arr2[n2];
 printf("Enter the elements :\n");
for(i=0;i<n2;i++)
 scanf("%d",&arr2[i]);
 int mergerd[100],k=0;
 i=0,j=0;
 while(i < n1 || j < n2)
 {
   if(arr1[i]<arr2[j])
   {
    mergerd[k] = arr1[i];
    i++;
    k++;
   }
   else
   {
    mergerd[k] = arr2[j];
    j++;
    k++;
   }

 }
 printf("merged sorted array:\n");
 for(i=0;i<k;i++)
 {
    printf("%d ",mergerd[i]);
 }
 return 0;
}