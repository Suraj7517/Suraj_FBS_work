//compare n characters from strings
void main(){
	char str[]="iamSuraj";
	char str1[]="iamRahul";
	
	int result=strncmp(str,str1,3);
	if(result){
		printf("Both strings are not same");
	}
	else{
		printf("Both strings are same");
	}
}