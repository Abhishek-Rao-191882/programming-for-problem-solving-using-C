#include<stdio.h>
int main(){
int a,b,j,k,l;
int arr1[10],arr2[10],arr3[20];
printf("Enter the number of elements in first array:\n");
scanf("%d",&a);
printf("Enter the number of elements in second array:\n");
scanf("%d",&b);
printf("Enter the elements of first array in sorted order:\n");
for(j=0;j<a;j++)
    scanf("%d",&arr1[j]);
printf("Enter the elements of second array in sorted order:\n");
for(k=0;k<b;k++)
    scanf("%d",&arr2[k]);
j=0;
k=0;
l=0;
while(j<a && k<b)
{
    if(arr1[j]<=arr2[k]){
        arr3[l]=arr1[j];
    j++;
    l++;}
    else
        {arr3[l]=arr2[k];
    k++;
    l++;}
}
while(j<a)
{
    arr3[l]=arr1[j];
    l++;
    j++;
}
while(k<b)
{
    arr3[l]=arr2[k];
    l++;
    k++;
}

printf("New merged array in sorted order is:\n");
for(j=0;j<l;j++)
    printf("%d\t",arr3[j]);
return 0;

}

