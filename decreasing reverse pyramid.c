#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the number of rows:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
        for(j=n;j>=0;j--)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;}

