//Write a program to Union of arrays.
#include<stdio.h>
int main()
{
 int n,n1,i,j,flag,k=0;
 //for array 1
 printf(" Array 1 -> \n");
 printf("Enter size of : ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the element : \n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
//for array 2
 printf(" Array 2 -> \n");
 printf("Enter size of : ");
 scanf("%d",&n1);
 int b[n1];
 printf("Enter the element : \n");
 for(i=0;i<n1;i++)
 scanf("%d",&b[i]);
 int n2=n1+n;
 int c[n2];
 //for union 

     // Process first array
    for(i = 0; i < n; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(a[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

    // Process second array
    for(i = 0; i < n1; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays:\n");

    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
