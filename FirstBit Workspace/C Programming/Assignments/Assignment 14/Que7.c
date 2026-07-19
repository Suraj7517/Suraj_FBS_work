
typedef struct Time{
	int hour;
	int min;
	int sec;
}Time;

void displayTimeByValue(Time);
void displayTimeByAddress(Time *);
void displayTimeByAddressArray(Time *,int);

void addTimeByValue(Time t1){
	t1.hour=22;
	t1.min=16;
	t1.sec=55;
	displayTimeByValue(t1);
}

void addTimeByAddress(Time *t1){
	t1->hour=11;
	t1->min=44;
	t1->sec=51;
	
	displayTimeByAddress(t1);
}

void addTimeByAddressArray(Time *t2,int size){
	t2[0].hour=2;
	t2[0].min=11;
	t2[0].sec=33;
	
	t2[1].hour=6;
	t2[1].min=12;
	t2[1].sec=53;
	
	displayTimeByAddressArray(t2,size);
}

void displayTimeByValue(Time t1){
	printf("Hour : %d ",t1.hour);
	printf("Minute : %d ",t1.min);
	printf("Seconds : %d\n",t1.sec);
}

void displayTimeByAddress(Time* t1){
	printf("Hour : %d ",t1->hour);
	printf("Minute : %d ",t1->min);
	printf("Seconds : %d\n",t1->sec);
}

void displayTimeByAddressArray(Time *t2,int size){
	for(int i=0;i<size;i++){
		printf("Hour : %d ",t2[i].hour);
		printf("Minute : %d ",t2[i].min);
		printf("Seconds : %d\n",t2[i].sec);
	}
}

void main(){
	Time t1,t2[2];
	int size=2;
	addTimeByValue(t1);
	addTimeByAddress(&t1);
	addTimeByAddressArray(t2,size);
}