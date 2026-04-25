//3. Write a program to check whether a given year is a leap year.
void isleap(int);
void main(){
	int year=2003;
	isLeap(year);	
}
void isLeap( int year){
	
	if(year%4==0&&year%100!=0||year%400==0){
		printf("%d is a leap year",year);
	}
	else
	printf("%d is not a leap year",year);
}