//WAP to Calculate the Number of Words Present in a String

void main(){
	char str []="This is a String";
	int i=0,words=0;
	
	while(str[i]!='\0'){
		if(i==0 || str[i-1]==' '){
			words++;
		}
		i++;
	}
	
	printf("Total words in this strings are :%d",words);
	
}