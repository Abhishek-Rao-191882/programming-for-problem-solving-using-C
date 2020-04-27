#include<stdio.h>
#define SIZE 7
int main()
{
    int arr[SIZE],i,even=0,odd=0;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter the elements for arr[%d]:",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers= %d and odd numbers= %d\n",even, odd);

return 0;}

