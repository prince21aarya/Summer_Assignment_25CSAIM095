//Write a program to Check Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
 int num,sum=0,r,n,c=0,t;
 printf("Enter the number :  ");
 scanf("%d",&num);
 n=num;
 while(n!=0)
  {
     n=n/10;
     c=c+1;
  }
  
 t=num;
  while(t!=0){
    r=t%10;
    sum= sum +  (int)pow(r,c);
    t=t/10;
    
  }
  printf("\n");
  if(num==sum){
    printf("the number is armstrong no");
  }
  else{
     printf("the number is not armstrong no");
  }

return 0;

}