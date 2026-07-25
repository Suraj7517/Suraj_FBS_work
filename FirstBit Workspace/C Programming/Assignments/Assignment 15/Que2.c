/*2. Create a structure Time with data members as hrs, min, sec. Accept the values of all
these members from user and display them. Also perform addition of two time variables
and display the result. If sec goes beyond 60, carry it to min etc. Add a method to convert
the given time into sec.*/

typedef struct Time{
	int hrs;
	int min;
	int sec;
}Time;

Time addTime(Time t1, Time t2){
	Time t3;
	
	t3.sec = t1.sec + t2.sec;
	t3.min = t1.min + t2.min;
	t3.hrs = t1.hrs + t2.hrs;
	
	if(t3.sec >= 60){
		t3.min = t3.min + t3.sec / 60;
		t3.sec = t3.sec % 60;
	}
	
	if(t3.min >= 60){
		t3.hrs = t3.hrs + t3.min / 60;
		t3.min = t3.min % 60;
	}
	
	return t3;
}

int convertToSec(Time t){
	return (t.hrs * 3600) + (t.min * 60) + t.sec;
}

void main(){
	Time t1, t2, t3;
	
	printf("Enter First Time\n");
	printf("Hours : ");
	scanf("%d",&t1.hrs);
	printf("Minutes : ");
	scanf("%d",&t1.min);
	printf("Seconds : ");
	scanf("%d",&t1.sec);
	
	printf("\nEnter Second Time\n");
	printf("Hours : ");
	scanf("%d",&t2.hrs);
	printf("Minutes : ");
	scanf("%d",&t2.min);
	printf("Seconds : ");
	scanf("%d",&t2.sec);
	
	printf("\nFirst Time : %d:%d:%d\n",t1.hrs,t1.min,t1.sec);
	printf("Second Time : %d:%d:%d\n",t2.hrs,t2.min,t2.sec);
	
	t3 = addTime(t1,t2);
	
	printf("\nAfter Addition : %d:%d:%d\n",t3.hrs,t3.min,t3.sec);
	
	printf("\nFirst Time in Seconds : %d\n",convertToSec(t1));
	printf("Second Time in Seconds : %d\n",convertToSec(t2));
}