
typedef struct Product{
	int id;
	char name[20];
	int quantity;
	double price;
	
}Product;
void addProductByValue(Product p1){
	p1.id=111;
	strcpy(p1.name,"Fan");
	p1.quantity=200;
	p1.price=23278;
	displayProductByValue(p1);
}
void displayProductByValue(Product p1){
	printf("ID : %d ",p1.id);
	printf("Name : %s ",p1.name);
	printf("Quantity : %d ",p1.quantity);
	printf("Price : %.2f\n",p1.price);
}

void addProductByAddress(Product *p1){
	p1->id=121;
	strcpy(p1->name,"Cooler");
	p1->price=48231;
	p1->quantity=300;
	
	displayProductByAddress(p1);
}

void displayProductByAddress(Product* p1){
	printf("ID : %d ",p1->id);
	printf("Name : %s ",p1->name);
	printf("Quantity : %d ",p1->quantity);
	printf("Price : %.2f\n",p1->price);
}

void addProductByAddressArray(Product *p2,int size){
	p2[0].id=131;
	strcpy(p2[0].name,"Washing-Machine");
	p2[0].quantity=450;
	p2[0].price=31311;
	
	p2[1].id=141;
	strcpy(p2[1].name,"T.V");
	p2[1].quantity=550;
	p2[1].price=64131;


	displayProductByAddressArray(p2,size);
}
void displayProductByAddressArray(Product *p2,int size){
	for(int i=0;i<size;i++){
		printf("ID : %d ",p2[i].id);
		printf("Name : %s ",p2[i].name);
		printf("Quantity : %d ",p2[i].quantity);
		printf("Price : %.2f\n",p2[i].price);
		
	}
}

void main(){
	Product p1,p2[2];
	int size=2;
	addProductByValue(p1);
	addProductByAddress(&p1);
	addProductByAddressArray(p2,size);
}