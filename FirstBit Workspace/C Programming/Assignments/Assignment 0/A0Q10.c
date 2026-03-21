/*10. Write a C program to input marks of five subjects, find the total marks, and calculate
the percentage.*/
void main(){
	float sub1=77,sub2=87,sub3=98,sub4=76,sub5=91,tmarks;
	float per;
	tmarks=(sub1+sub2+sub3+sub4+sub5);
	printf("Total obtained marks out of 500 is = %f",tmarks);
	per=tmarks/5;
	printf("\nThe persentage of student is = %f",per);
	
}