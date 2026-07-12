//2. WAP Replace all Occurrences of ‘a’ with $ in a String

void main(){
	char str[]="Suraj";
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='a'){
			str[i]='$';
		
		}
			i++;
	}
	printf("%s",str);
}