//Write a program to Recursive Fibonacci
#include<stdio.h>
int Fibonacci( int n);
int main()
{
 int x,i,result;
 printf("Enter the number: ");
 scanf("%d",&x);
 for(i = 0; i < x; i++)
    {
        printf("%d ", Fibonacci(i));
    }

    
return 0;
}
int Fibonacci(int n)
{
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
 

}