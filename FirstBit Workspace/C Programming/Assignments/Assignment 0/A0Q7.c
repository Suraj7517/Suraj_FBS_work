//7. Write a C program to convert given minutes into hours and remaining minutes.

void main(){
	int m=1745,h,rm;
	h=m/60;
	rm=m%60;
	printf("The Conversion %d minutes into hours is = %d.%d",m,h,rm);
	
}