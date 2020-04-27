#include<stdio.h>
int main()
{
    int arr[50],i,item,flag=0,n;
    printf("Enter the no. of elements in an array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements for arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the item to be searched:\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(item==arr[i])
        {
            printf("%d found at position %d\n",item,i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("\n %d is not found in the array:\n",item);

return 0;}


