#include<stdio.h>
int main()
{
    char op;
    int a,b;
    printf("Enter valid operator:\n");
    scanf("%c",&op);
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    switch(op)
    {
    case '+':
        printf("Result=%d\n",a+b);
        break;
    case '-':
        printf("Result=%d\n",a-b);
        break;
    case '*':
        printf("Result=%d\n",a*b);
        break;
    case '/':
        printf("Result=%d\n",a/b);
        break;
    case '%':
        printf("Result=%d\n",a%b);
        break;
    default:
        printf("Enter valid operator.");
        break;
    }
return 0;
}
