// Write a program to Reverse array.
#include<stdio.h>
int main()
{
 int arr[100],n;
 printf("enter the number of element : ");
 scanf("%d",&n);
 printf("enter the elements of an array : \n");
 for(int i=0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 //for revrerse
 for( int i=0;i<n/2;i++)
{
  int temp=arr[i];
  arr[i]=arr[n-1-i];
  arr[n-1-i]=temp;
}
printf("reversed array is : ");
for(int i=0;i<n;i++)
printf("%d ",arr[i]);

return 0;
}