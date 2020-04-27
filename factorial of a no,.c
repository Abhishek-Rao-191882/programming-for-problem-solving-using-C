#include<stdio.h>
int main()
{
    int i,n;
    long fact=1;
    printf("Enter the number whose factorial you want:\n");
    scanf("%d",&n);
    if(n<0)
        printf("factorial of a negative no. does not exit.");
    else{
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("The facorial of the entered no is: %d",fact);
        printf("\n***********************************************");

    }
    return 0;
}
