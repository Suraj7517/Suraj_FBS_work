//4.mystrcat()
void mystrcat(char * dest,char * src){
	int i=0,j=0;
	while(dest[i]!='\0'){
		i++;
	}
	while(src[j]!='\0'){
		dest[i]=src[j];
		i++;
		j++;
	}
	dest[i]='\0';
}
void main(){
	char str1[]="Hello";
	char str2[]="World!";
	
	mystrcat(str1,str2);
	printf("%s",str1);
	
}