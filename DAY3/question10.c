//Write a program to Print prime numbers in a range.


#include<stdio.h>
int main(){
    int num ,n,i,j,flag=0;
    printf("enter the number of starting range: ");
    scanf("%d",&num);
    printf("enter the number of ending range: ");
    scanf("%d",&n);
     printf("the prime numbers btw %d and %d are\n",num,n);
    for(i=num;i<=n;i++)
    {
      if(i<2)
      continue;
      flag=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0){
        flag =1;
        break;
          }   
         }   

         if(flag==0){
        printf("%d ",i);
        }
        
        }


    return 0;
 }