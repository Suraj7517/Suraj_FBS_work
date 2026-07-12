//6. WAP to Take in a String and Replace Every Blank Space with special symbol.
void main(){
	char str[]="Hello Welcome";
	int i=0;
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]='#';
		}
			i++;
	}
	printf("%s",str);
}