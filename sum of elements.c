#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the elements for arr[%d]:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of the elements of the Array is =%d\n",sum);
return 0;}

