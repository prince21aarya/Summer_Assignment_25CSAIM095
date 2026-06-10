//Write a program to Convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main()
{
int num,r,deci=0,n,i=0;
printf("Enter the binary number : ");
scanf("%d",&num);
n=num;
while(n!=0)
{
 r=n%10;
 deci=deci+r*pow(2,i);
 n=n/10;
 i++;

}

printf("the decimal no is  : %d ",deci);

return 0;
}