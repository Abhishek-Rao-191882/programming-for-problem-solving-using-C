#include<stdio.h>
int main(){
int i,j,n,p;
printf("Enter the no of rows:\n");
scanf("%d",&n);
p=1;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
    printf("%d",p);
    p=p+1;
    }

    printf("\n");}
return 0;}
