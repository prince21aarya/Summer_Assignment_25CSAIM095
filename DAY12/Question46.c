//Write a program to Write function for Armstrong.
#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main()
{
int x;
printf("Enter the number : ");
scanf("%d",&x);
if(armstrong(x))
{
    printf("the number is Armstrong");
}
else
{
printf("the number is not aarmstrong");
}
return 0;
}
 int armstrong(int n)
 {
    int sum=0,r,n1,n2,c=0;
    n1=n;
    while(n1!=0)
    {
    n1=n1/10;
    c++;
    }
    n2=n;
    while(n2!=0)
    {
     r=n2%10;
     sum = sum + round(pow(r,c));
     n2=n2/10;
    }
    if(n==sum){
        return 1;
    }
    else{
        return 0;
    }
 }