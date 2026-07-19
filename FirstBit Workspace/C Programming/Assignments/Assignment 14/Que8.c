
typedef struct Distance{
	int feet;
	int inch;
}Distance;

void displayDistanceByValue(Distance);
void displayDistanceByAddress(Distance *);
void displayDistanceByAddressArray(Distance *,int);

void addDistanceByValue(Distance d1){
	d1.feet=22;
	d1.inch=1;
	displayDistanceByValue(d1);
}

void addDistanceByAddress(Distance *d1){
	d1->feet=11;
	d1->inch=4;
	displayDistanceByAddress(d1);
}

void addDistanceByAddressArray(Distance *d2,int size){
	d2[0].feet=2;
	d2[0].inch=5;
	
	d2[1].feet=6;
	d2[1].inch=6;
	
	displayDistanceByAddressArray(d2,size);
}

void displayDistanceByValue(Distance d1){
	printf("Feet : %d ",d1.feet);
	printf("Inch : %d\n",d1.inch);
}

void displayDistanceByAddress(Distance* d1){
	printf("Feet : %d ",d1->feet);
	printf("Inch : %d\n",d1->inch);
}

void displayDistanceByAddressArray(Distance *d2,int size){
	for(int i=0;i<size;i++){
		printf("Feet : %d ",d2[i].feet);
		printf("Inch : %d\n",d2[i].inch);
	}
}

void main(){
	Distance d1,d2[2];
	int size=2;
	addDistanceByValue(d1);
	addDistanceByAddress(&d1);
	addDistanceByAddressArray(d2,size);
}