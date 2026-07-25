//1. Create a structure Book with data members as name, id, author, price. Accept the
//values of all these members from user and display them.
#include <stdio.h>
#include <string.h>
typedef struct Book{
	char bname[20];
	int id;
	char author[20];
	double price;
}Book;

void main(){
	Book b1;
	char bname[20],author[20];
	printf("Enter book name : ");
	scanf("%s",&bname);
	strcpy(b1.bname,bname);
	printf("Enter Id : ");
	scanf("%d",&b1.id);
	printf("Enter author name : ");
	scanf("%s",&author);
	strcpy(b1.author,author);
	printf("Enter price : ");
	scanf("%lf",&b1.price);
	
	printf("Book name : %s\n",b1.bname);
	printf("ID : %d\n",b1.id);
	printf("Author name : %s\n",b1.author);
	printf("Price : %.2lf\n",b1.price);
	
}