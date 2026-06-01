//Compares memory blocks.
void main(){
	char a[] = "ABCD";
	char b[] = "ABC";

	int res=memcmp(a, b, 3);
	
	if(res){
		printf("Both are not same");
	}
	else{
		printf("Both are same");
	}
}

