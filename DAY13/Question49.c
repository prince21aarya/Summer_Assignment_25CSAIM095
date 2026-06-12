//Write a program to Input and display array.
#include<stdio.h>
int main()
{
int i,n,ar[100];
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
printf("Display the array: \n");
for(i=0;i<n;i++)
{
 printf("%d ",ar[i]);
}
return 0;
}