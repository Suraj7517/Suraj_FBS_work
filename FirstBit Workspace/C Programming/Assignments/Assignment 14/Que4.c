
typedef struct HR{
	int id;
	char name[15];
	double salary;
	double commission;
}HR;
void addHRByValue(HR e1){
	e1.id=111;
	strcpy(e1.name,"Suraj");
	e1.salary=23278;
	e1.commission=2534;
	displayHRByValue(e1);
}
void displayHRByValue(HR e1){
	printf("ID : %d ",e1.id);
	printf("Name : %s ",e1.name);
	printf("Base Salary : %.2f ",e1.salary);
	printf("Commission : %.2f\n",e1.commission);
}

void addHRByAddress(HR *e1){
	e1->id=121;
	strcpy(e1->name,"Sammed");
	e1->salary=48231;
	e1->commission=3546;
	
	displayHRByAddress(e1);
}

void displayHRByAddress(HR* e1){
	printf("ID : %d ",e1->id);
	printf("Name : %s ",e1->name);
	printf("Base Salary : %.2f ",e1->salary);
	printf("Commission : %.2f\n",e1->commission);
}

void addHRByAddressArray(HR *e2,int size){
	e2[0].id=131;
	strcpy(e2[0].name,"Pranav");
	e2[0].salary=31311;
	e2[0].commission=3577;
	
	e2[1].id=141;
	strcpy(e2[1].name,"Sahil");
	e2[1].salary=64131;
	e2[1].commission=7356;

	displayHRByAddressArray(e2,size);
}
void displayHRByAddressArray(HR *e2,int size){
	for(int i=0;i<size;i++){
		printf("ID : %d ",e2[i].id);
		printf("Name : %s ",e2[i].name);
		printf("Base Salary : %.2f ",e2[i].salary);
		printf("Commission : %.2f\n",e2[i].commission);
	}
}

void main(){
	HR e1,e2[2];
	int size=2;
	addHRByValue(e1);
	addHRByAddress(&e1);
	addHRByAddressArray(e2,size);
}