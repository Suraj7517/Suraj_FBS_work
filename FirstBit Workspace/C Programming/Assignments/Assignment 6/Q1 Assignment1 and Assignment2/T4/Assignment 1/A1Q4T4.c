//4.Write a program to check whether a given character is a vowel or consonant.
int check(char);
void main(){
	char ch='O';
	int n=check(ch);
	
	if(n){
		printf("%c is a vovel",ch);
	}
	else{
		printf("%c is a consonant",ch);
	}
}
int check(char ch){
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	   	return 1;
	}
	else{
		return 0;
	}
}