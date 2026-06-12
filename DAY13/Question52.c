//Write a program to Count even and odd elements.
#include<stdio.h>
int main()
{
int i,n,ar[100],odd=0,even=0;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}

for(i=0;i<n;i++)
{
if(ar[i]%2==0){
    even++;
}
else{
    odd++;
}
}
printf("the count of an odd number is \n %d",odd);
printf("\nthe count of an even number is \n %d",even);
return 0;
}