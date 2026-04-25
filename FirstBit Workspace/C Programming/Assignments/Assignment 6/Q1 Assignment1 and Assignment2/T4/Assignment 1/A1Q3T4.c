//3. Write a program to check whether a given year is a leap year.
int isLeap(int);
void main(){
	int year=2024;
	int check=isLeap(year);
	if(check){
		printf("%d is a leap year",year);
	}
	else
	printf("%d is not a leap year",year);	
}
int isLeap( int year){
	
	if(year%4==0&&year%100!=0||year%400==0){
		return 1;
	}
	else
	return 0;
}