//Write a program to Multiply matrices.
#include<stdio.h>
int main()
{
 int n,n1,i,j;
 printf("matric 1-->\n");
printf("Enter  row size : ");
scanf("%d",&n);
printf("Enter  column size : ");
scanf("%d",&n1);
int a[n][n1];
printf("Enter the element : \n");
for(i=0;i<n;i++)
{
 for(j=0;j<n1;j++)
 scanf("%d",&a[i][j]);
}
int c,d;

printf("matric 2-->\n");
printf("Enter  row size : ");
scanf("%d",&c);
printf("Enter  column size : ");
scanf("%d",&d);
int b[c][d];
printf("Enter the element : \n");
for(i=0;i<c;i++)
{
 for(j=0;j<d;j++)
 scanf("%d",&b[i][j]);
}

//for multiplication
if(n1 != c)
{
    printf("Matrix multiplication not possible.");
    return 0;
}
int k, m[n][d];
for(i=0;i<n;i++)
{
    for(j=0;j<d;j++)
    {
        m[i][j]=0;
        for(k=0;k<n1;k++)
        {
            m[i][j]+=a[i][k]*b[k][j];
        }
    }
}
printf("result matrics: \n");
for(i=0;i<n;i++)
{
 for(j=0;j<n1;j++){
 printf("%4d ",m[i][j]);

}
printf("\n");
}
return 0;

}