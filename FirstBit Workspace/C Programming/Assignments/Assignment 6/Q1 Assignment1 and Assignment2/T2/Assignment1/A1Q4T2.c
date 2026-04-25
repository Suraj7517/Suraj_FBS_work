//4.Write a program to check whether a given character is a vowel or consonant.
int IsVowel();
void main(){
int x =	IsVowel();
if(x){
	printf("It is a vowel");
}
else{
	printf("It is a consonant");
}
}
int IsVowel(){
	char ch='O';
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	   	
		return 1;
	}
	else{
		return 0;
	}
}