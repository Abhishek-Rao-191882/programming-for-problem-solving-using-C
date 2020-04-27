#include<stdio.h>
int main()
{
    int arr[10],i,j,temp;
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
    for(i=0,j=9;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("\nThe reverse elements of an array are:\n");
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
return 0;}

