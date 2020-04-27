#include<stdio.h>
int main(){
int n;
printf("Enter a number:\n");
scanf("%d",&n);
if(n%2==0)
    goto Even;
else
    goto Odd;
Even:
    printf("Even\n");
    goto end;
Odd:
    printf("Odd\n");
    goto end;
end:
    printf("\n");
return 0;
}
