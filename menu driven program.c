#include<stdio.h>
int main(){
int choice;
while(1){
    printf("1. Create database.\n");
    printf("2. Insert new record.\n");
    printf("3. Modify record.\n");
    printf("4. Display all records.\n");
    printf("5. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d",&choice);
switch(choice)
{
case 1:
    printf("Database created......\n");
    break;
case 2:
    printf("Record inserted......\n");
    break;
case 3:
    printf("Record modified......\n");
    break;
case 4:
    printf("Record displayed......\n");
    break;
case 5:
    exit(1);
default:
    printf("Wrong choice.\n");

}
return 0;
}

}
