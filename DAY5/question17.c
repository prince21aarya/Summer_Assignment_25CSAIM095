//Write a program to Check perfect number
#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter the number :  ");
scanf("%d",&num);

for(i=1;i<num;i++)
{
    if(num%i==0){
        sum=sum+i;
    }

}

if(num==sum)
{
    printf("the number is perfect");
}
else{
    printf("the number is not perfect");
}
return 0;
}