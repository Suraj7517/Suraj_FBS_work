//3.mystrcmp();

int mystrcmp(char * str2,char* str1){
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0'){
		if(str1[i]!=str2[i]){
			if(str1[i]>str2[i]){
				return str1[i] - str2[i];
			}
			else{
				return str2[i] - str1[i];
			}
		}
	i++;
	}
		return 0;
	}

void main(){
	char str1[]="Hello";
	char str2[]="Hello";
	
	printf("%d",mystrcmp(str2,str1));
	
}