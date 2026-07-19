
typedef struct SalesManager{
	int id;
	char name[15];
	double salary;
	double incentive;
	int target;
}SalesManager;
void addSalesManagerByValue(SalesManager e1){
	e1.id=111;
	strcpy(e1.name,"Suraj");
	e1.salary=23278;
	e1.incentive=2534;
	e1.target=200;
	displaySalesManagerByValue(e1);
}
void displaySalesManagerByValue(SalesManager e1){
	printf("ID : %d ",e1.id);
	printf("Name : %s ",e1.name);
	printf("Base Salary : %.2f ",e1.salary);
	printf("Incentive : %.2f ",e1.incentive);
	printf("Target : %d\n",e1.target);
}

void addSalesManagerByAddress(SalesManager *e1){
	e1->id=121;
	strcpy(e1->name,"Sammed");
	e1->salary=48231;
	e1->incentive=3546;
	e1->target=300;
	
	displaySalesManagerByAddress(e1);
}

void displaySalesManagerByAddress(SalesManager* e1){
	printf("ID : %d ",e1->id);
	printf("Name : %s ",e1->name);
	printf("Base Salary : %.2f ",e1->salary);
	printf("Incentive : %.2f ",e1->incentive);
	printf("Target : %d\n",e1->target);
}

void addSalesManagerByAddressArray(SalesManager *e2,int size){
	e2[0].id=131;
	strcpy(e2[0].name,"Pranav");
	e2[0].salary=31311;
	e2[0].incentive=3577;
	e2[0].target=450;
	
	e2[1].id=141;
	strcpy(e2[1].name,"Sahil");
	e2[1].salary=64131;
	e2[1].incentive=7356;
	e2[1].target=550;

	displaySalesManagerByAddressArray(e2,size);
}
void displaySalesManagerByAddressArray(SalesManager *e2,int size){
	for(int i=0;i<size;i++){
		printf("ID : %d ",e2[i].id);
		printf("Name : %s ",e2[i].name);
		printf("Base Salary : %.2f ",e2[i].salary);
		printf("Incentive : %.2f ",e2[i].incentive);
		printf("Target : %d\n",e2[i].target);
	}
}

void main(){
	SalesManager e1,e2[2];
	int size=2;
	addSalesManagerByValue(e1);
	addSalesManagerByAddress(&e1);
	addSalesManagerByAddressArray(e2,size);
}