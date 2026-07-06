//6. mystrupper

void mystrupper(char * src){
	int i=0;
	while(src[i]!='\0'){
		if(src[i]>=97 && src[i]<=122){
				src[i]=src[i]-32;
		}
		i++;
	}
}
void main(){
	char str[]="hello";
	
	mystrupper(str);
	printf("%s",str);
}