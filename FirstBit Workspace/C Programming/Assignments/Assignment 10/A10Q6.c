//compare strings
void main(){
	char str[]="Suraj";
	char str1[]="Suraj";
	
	int result=strcmp(str,str1);
	if(result){
		printf("Both strings not are same");
	}
	else{
		printf("Both strings are same");
	}
}