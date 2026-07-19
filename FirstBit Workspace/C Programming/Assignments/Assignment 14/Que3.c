
typedef struct Admin{
	int id;
	char name[15];
	double salary;
	double allowance;
}Admin;
void addAdminByValue(Admin e1){
	e1.id=111;
	strcpy(e1.name,"Suraj");
	e1.salary=7327;
	e1.allowance=5534;
	displayAdminByValue(e1);
}
void displayAdminByValue(Admin e1){
	printf("ID : %d ",e1.id);
	printf("Name : %s ",e1.name);
	printf("Base Salary : %.2f ",e1.salary);
	printf("Allowance : %.2f\n",e1.allowance);
}

void addAdminByAddress(Admin *e1){
	e1->id=121;
	strcpy(e1->name,"Sammed");
	e1->salary=88231;
	e1->allowance=3546;
	
	displayAdminByAddress(e1);
}

void displayAdminByAddress(Admin* e1){
	printf("ID : %d ",e1->id);
	printf("Name : %s ",e1->name);
	printf("Base Salary : %.2f ",e1->salary);
	printf("Allowance : %.2f\n",e1->allowance);
}

void addAdminByAddressArray(Admin *e2,int size){
	e2[0].id=131;
	strcpy(e2[0].name,"Pranav");
	e2[0].salary=81311;
	e2[0].allowance=6577;
	
	e2[1].id=141;
	strcpy(e2[1].name,"Sahil");
	e2[1].salary=64131;
	e2[1].allowance=4356;

	displayAdminByAddressArray(e2,size);
}
void displayAdminByAddressArray(Admin *e2,int size){
	for(int i=0;i<size;i++){
		printf("ID : %d ",e2[i].id);
		printf("Name : %s ",e2[i].name);
		printf("Base Salary : %.2f ",e2[i].salary);
		printf("Allowance : %.2f\n",e2[i].allowance);
	}
}

void main(){
	Admin e1,e2[2];
	int size=2;
	addAdminByValue(e1);
	addAdminByAddress(&e1);
	addAdminByAddressArray(e2,size);
}