//Write a program to Find prime factor.
#include<stdio.h>
int main()
{
int num,i,sum=0,j,flag,max=0;
printf("Enter the number :  ");
scanf("%d",&num);

for(i=1;i<num;i++)
{
    if(num%i==0){
        flag=0;
        for(j=2;j<i;j++)
        {
          
            if(i%j==0){
              flag=1;
            }
            if(flag==0){
        max=i;
    }
        }
       
  }

}
printf("%d  largest prime factor is %d",num,max);

return 0;
}
