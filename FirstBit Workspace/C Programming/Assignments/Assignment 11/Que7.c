//7.mystrlower

void mystrlower(char * src){
	int i=0;
	while(src[i]!='\0'){
		if(src[i]>=65 && src[i]<=90){
			
				src[i]=src[i]+32;
		}
		i++;
	}
}
void main(){
	char str[]="HELLO";
	
	mystrlower(str);
	printf("%s",str);
}