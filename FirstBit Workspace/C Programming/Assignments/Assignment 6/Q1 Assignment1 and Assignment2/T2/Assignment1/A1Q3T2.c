//3. Write a program to check whether a given year is a leap year.
int IsLeap();
void main(){
	int x=IsLeap();
	if(x){
		printf("Leap year");
	}
	else{
		printf("Not a leap year");
	}
}
int IsLeap(){
	int year=2003;
	if(year%4==0&&year%100!=0||year%400==0){
		return 1;
	}
	else
		return 0;
}