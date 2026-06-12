//Write a program to Linear search.
#include<stdio.h>
int main()
{
int i,n,ar[100],se,flag=0,c;
printf("Enter the number of elements : ");
scanf("%d",&n);

printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
printf("Enter the searching element : ");
scanf("%d",&se);
for(i=0;i<n;i++)
{
 if(se==ar[i])
 {
    flag=1;
    c=i;
    break;
 }
}
if(flag==0){
    printf("the searching element has not found");
}
if(flag==1){
    printf("the searching element has found at  index %d",c);
}
return 0;
}