//8.mystrrev
void mystrrev(char * src){
	char dest[20];
	int i=0,j=0;
	while(src[i]!='\0'){
		i++;
	}
	i--;
	while(i>=0){
		dest[j]=src[i];
		j++;
		i--;
	}
	dest[j]='\0';
	i=0;
	while(dest[i]!='\0'){
		src[i]=dest[i];
		i++;
	}
	src[i]='\0';
}
void main(){
	char str[]="Hello";

	mystrrev(str);
	printf("%s",str);
}