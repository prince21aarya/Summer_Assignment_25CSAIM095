//Write a program to Print multiplication table of a given number.
#include<stdio.h>
int main(){
  int i,n,result;
   printf("the table no.: ");
   scanf("%d",&n);

   printf("multiplication table of a given number :\n");
   for(i=1;i<=10;i++){
     result= n*i;
     printf("%d X %d= %d\n",n,i,result);
   }
  

return 0;

}