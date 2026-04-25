/*7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/
float salary(float);
void main(){
	float bs=7000;
	float Tsalary=salary(bs);
	printf("The total salary is %.2f",Tsalary);
}
float salary(float bs){
	float ta,da,hra,salary;
	if(bs<=5000){
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.30;
	}
	else{
		da=bs*0.15;
		ta=bs*0.25;
		hra=bs*0.30;
	}
	return salary=bs+da+ta+hra;
}