#include<stdio.h>
#include<stdlib.h>
struct book{
	char name[30];
	int edition;
	char author_name[30];
	int price;
};

int main()
{
	struct book *bptr;
	bptr = (struct book*)malloc(sizeof(struct book));
	printf("Enter the name of the book\n");
	scanf("%s",bptr->name);
	printf("Enter the Edition\n");
	scanf("%d",&bptr->edition);
	printf("Enter the author_name\n");
	scanf("%s",bptr->author_name);
	printf("Enter price\n");
	scanf("%d",&bptr->price);
	
	printf("\nThe details of the book are:\n");
	printf("\nName\tEdition\tauthor_name\tprice");
	printf("\n%s\t%d\t%s\t%d",bptr->name,bptr->edition,bptr->author_name,bptr->price);

	return 0;
}
