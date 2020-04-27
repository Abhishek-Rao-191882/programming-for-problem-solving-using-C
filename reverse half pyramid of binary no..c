#include<stdio.h>
int main(){
int i,j,n;
printf("Enter the number of rows:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf(" ");
            else
                if((i+j)%2==0)
                printf("1");
               else
                printf("0");
        }
        printf("\n");
    }
return 0;}


