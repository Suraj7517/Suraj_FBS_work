
typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void addDateByValue(Date d1){
	d1.day=21;
	d1.month=12;
	d1.year=2023;
	displayDateByValue(d1);
}
void displayDateByValue(Date d1){
	printf("Day : %d ",d1.day);
	printf("Month : %d ",d1.month);
	printf("Year : %d\n",d1.year);
}

void addDateByAddress(Date *d1){
	d1->day=12;
	d1->month=8;
	d1->year=2004;
	
	displayDateByAddress(d1);
}

void displayDateByAddress(Date* d1){
	printf("Day : %d ",d1->day);
	printf("Month : %d ",d1->month);
	printf("Year : %d\n",d1->year);
}

void addDateByAddressArray(Date *d2,int size){
	d2[0].day=13;
	d2[0].month=11;
	d2[0].year=2025;
	
	d2[1].day=14;
	d2[1].month=10;
	d2[1].year=2024;
	
	displayDateByAddressArray(d2,size);
}
void displayDateByAddressArray(Date *d2,int size){
	for(int i=0;i<size;i++){
		printf("Day : %d ",d2[i].day);
		printf("Month : %d ",d2[i].month);
		printf("Year : %d\n",d2[i].year);
	}
}

void main(){
	Date d1,d2[2];
	int size=2;
	addDateByValue(d1);
	addDateByAddress(&d1);
	addDateByAddressArray(d2,size);
}