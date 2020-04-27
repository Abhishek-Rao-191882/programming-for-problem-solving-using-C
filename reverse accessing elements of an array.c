#include<stdio.h>
int main()
{
    int arr[100],i,j,temp;
    for(i=0;i<10;i++)
    {
        printf("Enter the elements for arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nThe reverse elements of an array are:\n");
    for(i=9;i>=0;i--)
        printf("%d\t",arr[i]);
return 0;}


