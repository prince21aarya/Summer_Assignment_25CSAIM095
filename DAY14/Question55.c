//Write a program to Second largest element.
//Write a program to Find largest and smallest element.
#include<stdio.h>
int main()
{
int i,n,ar[100],max,second_largest;
printf("Enter the number of elements : ");
scanf("%d",&n);
printf("Enter the elements : \n");
for(i=0;i<n;i++)
{
 scanf("%d",&ar[i]);
}
max=ar[0];

for(i=0;i<n;i++)
{
 if(max<ar[i])
 {
    second_largest = max;
    max=ar[i];
 }
else if(ar[i] > second_largest && ar[i] != max)
        {
            second_largest = ar[i];
        }

}
printf("Second Largest Element = %d", second_largest);


return 0;
}