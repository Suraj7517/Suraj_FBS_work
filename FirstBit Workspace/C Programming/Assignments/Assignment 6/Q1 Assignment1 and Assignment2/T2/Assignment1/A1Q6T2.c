//6. Write a program to check whether a given character is uppercase or lowercase.
int IsUpper();
void main(){
 int x=IsUpper();
 if(x){
 	printf("The given character is uppercase");
 }
 else{
 	printf("The given character is lowerscase");
 }
}
int IsUpper(){
	char ch='S';
	if(ch>='A'&&ch<='Z'){
	return 1;
	}
	else if(ch>='a'&&ch<='z'){
		return 0;
	}
}
