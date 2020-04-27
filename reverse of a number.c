#include<stdio.h>
int main(){
int rem, rev=0, num;
printf("Enter the Number:\n");
scanf("%d",&num);
while(num!=0){
    rem=num%10;
    num=num/10;
    rev=rev*10+rem;}
    printf("Reverse of the number is %d\n",rev);
    return 0;
}
