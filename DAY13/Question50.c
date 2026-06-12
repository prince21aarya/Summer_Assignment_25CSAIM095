//Write a program to Find sum and average of array.
#include<stdio.h>
int main()
{
int i,n,ar[100],sum=0;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
 sum=sum+ar[i];
}
printf("the sum of an array :%d\n",sum);
printf("the avg of an array : %d",sum/n);
return 0;
}