//Write a program to Convert decimal to binary.
#include<stdio.h>
int main()
{
    int num,n,i=0,j,bin[100];
    printf("Enter the decimal number : ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
   {
    bin[i]=n%2;
    i++;
    n=n/2;
   }
   
   printf("the binary number is : ");
   for(j=i-1;j>=0;j--)
   {
    printf("%d",bin[j]);
   }
    return 0;
}