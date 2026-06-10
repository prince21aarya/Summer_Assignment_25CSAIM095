//Write a program to Check whether a number is palindrome.
#include<stdio.h>

int main(){
int num,n,reverse=0,r;
printf("ENTER THE NUMBER :  ");
scanf("%d",&num);
 n=num;
while(n!=0){
r=n%10;
 reverse= reverse*10 + r;
 n=n/10;
}

printf("the reverse number of %d is %d\n",num,reverse);
if(num=reverse){
    printf("the number %d is palindrome",num);
}
else{
    printf("the number %d is not palindrome",num);
}
return 0;



}