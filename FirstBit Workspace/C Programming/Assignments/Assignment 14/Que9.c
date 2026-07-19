
typedef struct Complex{
	double real;
	double imaginary;
}Complex;

void displayComplexByValue(Complex);
void displayComplexByAddress(Complex *);
void displayComplexByAddressArray(Complex *,int);

void addComplexByValue(Complex d1){
	d1.real=2.4;
	d1.imaginary=1.5;
	displayComplexByValue(d1);
}

void addComplexByAddress(Complex *d1){
	d1->real=4.5;
	d1->imaginary=2.7;
	displayComplexByAddress(d1);
}

void addComplexByAddressArray(Complex *d2,int size){
	d2[0].real=5.7;
	d2[0].imaginary=3.6;
	
	d2[1].real=6.4;
	d2[1].imaginary=5.3;
	
	displayComplexByAddressArray(d2,size);
}

void displayComplexByValue(Complex d1){
	printf("Real : %.1f ",d1.real);
	printf("Imaginary : %.1fi\n",d1.imaginary);
}

void displayComplexByAddress(Complex* d1){
	printf("Real : %.1f ",d1->real);
	printf("Imaginary : %.1fi\n",d1->imaginary);
}

void displayComplexByAddressArray(Complex *d2,int size){
	for(int i=0;i<size;i++){
		printf("Real : %.1f ",d2[i].real);
		printf("Imaginary : %.1fi\n",d2[i].imaginary);
	}
}

void main(){
	Complex d1,d2[2];
	int size=2;
	addComplexByValue(d1);
	addComplexByAddress(&d1);
	addComplexByAddressArray(d2,size);
}