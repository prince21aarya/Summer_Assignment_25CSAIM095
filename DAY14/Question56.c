//Write a program to Find duplicates in array.
#include<stdio.h>
int main()
{
int i,n,ar[100],flag=0;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
printf("Duplicate elements are : ");
for(i=0;i<n;i++)
{
 for(int j=i+1;j<n;j++)
 {
   if(ar[i]==ar[j])
   {
    printf("%d ",ar[i]);
   flag=1;
   break;
   }

   
 }
}
 if(flag == 0)
    {
        printf("No duplicate elements found.");
    }
return 0;
}