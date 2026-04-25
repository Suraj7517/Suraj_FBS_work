//6. Write a program to check whether a given character is uppercase or lowercase.
void check();
void main(){
	check();	
}
void check(){
	char ch='S';
	if(ch>='A'&&ch<='Z'){
		printf("%c is uppercase character",ch);
	}
	else if(ch>='a'&&ch<='z'){
		printf("%c is lowercase character",ch);
	}
}
