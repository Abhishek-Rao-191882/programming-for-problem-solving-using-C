#include<stdio.h>
#include<math.h>
int main(){
int num,rem,n=0,sum=0;
printf("Enter a decimal no:\n");
scanf("%d",&num);
do{
    rem=num%2;
    sum=sum+(rem*pow(10,n));
    num=num/2;
    n++;
}while(n>0);
printf("Binary equivalent of decimal no %d = %d",num,sum);
return 0;

}

