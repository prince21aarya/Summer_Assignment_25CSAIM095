#include<stdio.h>

int main()
{
int a=0,b=1,sum ,i,n;

printf("Enter the number of terms : ");
scanf("%d",&n);
  printf("%d %d",a,b);
 for(i=1;i<=n;i++)
 {
    sum=a+b;
    printf(" %d",sum);
    a=b;
    b=sum;

 }
return 0;

}