//2.strlen();

int mystrLen(char * str){
		int i=0;
		while(str[i]!='\0'){
		i++;
	}
		return i;
}
void main(){
	char str[]="Hello";
	
	printf("Length of String: %d",mystrLen(str));
}