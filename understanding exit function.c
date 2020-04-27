#include<stdio.h>
int main(){
int n,i,p,q;
printf("Enter a number:\n");
scanf("%d",&n);
if(n==2)
{
    printf("the no %d is an even prime.",n);
    exit(0);
}
p=sqrt(n);
for(i=2;i<=p;i++)
{
    q=n%i;

if(q==0)
    break;
}
if(q==0)
    printf("The no %d is not a prime no.\n",n);
else
    printf("The no %d is a prime no.\n",n);
return 0;



}
