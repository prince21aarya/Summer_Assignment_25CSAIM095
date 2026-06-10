//Write a program to Print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main()
{
 int num,sum=0,r,n,n1,c=0,t,i;
 printf("enter the number of starting range: ");
    scanf("%d",&num);
    printf("enter the number of ending range: ");
    scanf("%d",&n);
     printf("the Armstrong numbers btw %d and %d are\n",num,n);
 for(i=num;i<=n;i++){
n1=i;
sum=0;
c=0;
 while(n1!=0)
  {
     n1=n1/10;
     c=c+1;
  }
 
  
 t=i;
  while(t!=0){
    r=t%10;
    sum= sum +  (int)pow(r,c);
    t=t/10;
  }
    if(i==sum){
    printf("%d ",i);
 }

  }
  return 0;
}
  


