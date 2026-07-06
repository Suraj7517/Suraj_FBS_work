//5.mystrncpy

void mystrncpy(char * dest,char * src,int n){
	int i=0;
	while(src[i]!='\0' && i!=n){
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}
void main(){
	char str1[]="Hello";
	char str2[20];
	
	mystrncpy(str2,str1,3);
	printf("%s",str2);
}