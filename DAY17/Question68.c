//Write a program to Find common elements.
#include<stdio.h>
int main()
{
 int n,n1,i,j=0,k=0,flag;
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
 //for intersection 
 for(i=0;i<n;i++)
 {
    for(j=0;j<n1;j++)
    {
      if(a[i]==b[j])
      {
        // Check duplicate
                flag = 0;
                for(int x = 0; x < k; x++)
                {
                    if(c[x] == a[i])
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

                break;  
      }
    }
 }
 printf("common element : \n");
 if(k==0)
 {
    printf("No common element found ");
 }
 else{
 for(i=0;i<k;i++)
 {
    printf("%d ",c[i]);
 }
}
return 0;
}
