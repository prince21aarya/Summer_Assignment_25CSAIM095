//Write a program to Print factors of a number.
#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter the number :  ");
scanf("%d",&num);

for(i=1;i<num;i++)
{
    if(num%i==0){
        printf("%d ",i);
    }

}

return 0;
}
