
typedef struct Employee{
	int id;
	char name [15];
	double salary;
}Employee;
void addEmployeeByValue(Employee e1){
	e1.id=111;
	strcpy(e1.name,"Suraj");
	e1.salary=87568;
	displayEmployeeByValue(e1);
}
void displayEmployeeByValue(Employee e1){
	printf("ID : %d ",e1.id);
	printf("Name : %s ",e1.name);
	printf("salary : %.2f\n",e1.salary);
}

void addEmployeeByAddress(Employee *e1){
	e1->id=121;
	strcpy(e1->name,"Sammed");
	e1->salary=785687;
	
	displayEmployeeByAddress(e1);
}

void displayEmployeeByAddress(Employee* e1){
	printf("ID : %d ",e1->id);
	printf("Name : %s ",e1->name);
	printf("salary : %.2f\n",e1->salary);
}

void addEmployeeByAddressArray(Employee *e2,int size){
	e2[0].id=131;
	strcpy(e2[0].name,"Pranav");
	e2[0].salary=85763;
	
	e2[1].id=141;
	strcpy(e2[1].name,"Sahil");
	e2[1].salary=76434;
	
	displayEmployeeByAddressArray(e2,size);
}
void displayEmployeeByAddressArray(Employee *e2,int size){
	for(int i=0;i<size;i++){
		printf("ID : %d ",e2[i].id);
		printf("Name : %s ",e2[i].name);
		printf("salary : %.2f\n",e2[i].salary);
	}
}

void main(){
	Employee e1,e2[2];
	int size=2;
	addEmployeeByValue(e1);
	addEmployeeByAddress(&e1);
	addEmployeeByAddressArray(e2,size);
}