//6. Write a program to check whether a given character is uppercase or lowercase.
int check(char);
void main(){
	char ch='a';
	int n=check(ch);
	if(n){
		printf("%c is uppercase character",ch);
	}
	else{
		printf("%c is lowercase character",ch);
	}	
}
int check(char ch){
	
	if(ch>='A'&&ch<='Z'){
		return 1;
	}
	else if(ch>='a'&&ch<='z'){
		return 0;
	}
}
