#include<stdio.h>
int main(){
int a[10], i, n, temp, j=0;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
printf("Enter the elements to an array:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("The sorted elements array are:\n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;

}
