//6. Write a program to check whether a given character is uppercase or lowercase.
void check(char);
void main(){
	char ch='S';
	check(ch);	
}
void check(char ch){
	
	if(ch>='A'&&ch<='Z'){
		printf("%c is uppercase character",ch);
	}
	else if(ch>='a'&&ch<='z'){
		printf("%c is lowercase character",ch);
	}
}
