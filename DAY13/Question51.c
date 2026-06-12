//Write a program to Find largest and smallest element.
#include<stdio.h>
int main()
{
int i,n,ar[100],max,min;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
max=ar[0];
min=ar[0];
for(i=0;i<n;i++)
{
 if(max<ar[i])
 {
    max=ar[i];
 }
 if(min>ar[i])
 {
    min=ar[i];
 }
}
printf("the maximum element of an array is  : %d\n",max);
printf("the minimum element of an array is  : %d ",min);
return 0;
}