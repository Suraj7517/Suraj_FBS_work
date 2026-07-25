/*4. Point of Sale System: Build a simple point of sale system using structures to
represent products with attributes like name, price, and quantity. Allow users
to add items to a cart and calculate the total cost.*/
typedef struct Product{
	char name[20];
	double price;
	int quantity;
}Product;

void addProduct(Product *p,int *cindex,int size){
	if(*cindex==size){
		printf("\nCart is Full!");
		return;
	}
	
	char pname[20];
	
	printf("\nEnter Product Name : ");
	scanf("%s",pname);
	strcpy(p[*cindex].name,pname);
	
	printf("Enter Product Price : ");
	scanf("%lf",&p[*cindex].price);
	
	printf("Enter Quantity : ");
	scanf("%d",&p[*cindex].quantity);
	
	(*cindex)++;
	printf("\nProduct Added Successfully!\n");
}

void displayProducts(Product *p,int cindex){
	if(cindex==0){
		printf("\nCart is Empty!\n");
		return;
	}
	
	for(int i=0;i<cindex;i++){
		printf("\nProduct %d",i+1);
		printf("\nName : %s",p[i].name);
		printf("\nPrice : %.2lf",p[i].price);
		printf("\nQuantity : %d",p[i].quantity);
		printf("\n----------------------");
	}
}

void calculateBill(Product *p,int cindex){
	double total=0;
	
	if(cindex==0){
		printf("\nCart is Empty!\n");
		return;
	}
	
	printf("\n------ BILL ------\n");
	
	for(int i=0;i<cindex;i++){
		double amount=p[i].price*p[i].quantity;
		total=total+amount;
		
		printf("\n%s",p[i].name);
		printf("\nPrice : %.2lf",p[i].price);
		printf("\nQuantity : %d",p[i].quantity);
		printf("\nAmount : %.2lf\n",amount);
	}
	
	printf("\n----------------------");
	printf("\nTotal Bill : %.2lf\n",total);
}

void main(){
	Product p[10];
	int cindex=0,choice;
	
	while(1){
		printf("\n1. Add Product");
		printf("\n2. Display Cart");
		printf("\n3. Calculate Total Bill");
		printf("\n4. Exit");
		
		printf("\nEnter Choice : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				addProduct(p,&cindex,10);
				break;
				
			case 2:
				displayProducts(p,cindex);
				break;
				
			case 3:
				calculateBill(p,cindex);
				break;
				
			case 4:
				return;
				
			default:
				printf("\nInvalid Choice!");
		}
	}
}