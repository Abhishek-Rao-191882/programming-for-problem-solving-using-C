#include<stdio.h>
int main()
{
    int arr[10],i,min,max;
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
    min=max=arr[0];
    for(i=0;i<9;i++){
            if(arr[i]<min)
            min=arr[i];
            if(arr[i]>max)
            max=arr[i];
    }
    printf("\n Minimum= %d maximum= %d\n",min,max);

return 0;}

