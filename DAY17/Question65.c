//Write a program to Merge arrays.
#include<stdio.h>
int main()
{
 int n,n1,i,j=0;
 //for array 1
 printf(" Array 1 -> \n");
 printf("Enter size of : ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the element : \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
//for array 2
 printf(" Array 2 -> \n");
 printf("Enter size of : ");
 scanf("%d",&n1);
 int b[n1];
 printf("Enter the element : \n");
 for(i=0;i<n1;i++)
 scanf("%d",&b[i]);
 int n2=n1+n;
 int c[n2];
 //for merging
 for(i=0;i<n2;i++)
 {
    if(i<n)
    {
        c[i]=a[i];
    }
    if(i>=n)
    {
        
        c[i]=b[j];
        j++;
    }
 }
 printf("merged array is : \n");
 for(i=0;i<n2;i++)
 {
    printf("%d ",c[i]);
 }
 return 0;
}