//7. WAP to Remove the Characters of Odd Index Values in a String
void main(){
	char str[]="Welcome";
	int i=0;
	while(str[i]!='\0'){
		if(i%2!=0){
			str[i]=' ';
		}
			i++;
	}
	
	while(str[i]!='\0'){
		if(str[i]==' '){
			str[i]=str[i+1];
		}
			i++;
	}
	

	printf("%s",str);
}