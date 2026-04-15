/*3. Print an inverted right-angled triangle pattern
Input: n = 5*/
void main(){
	int num=5;
	for(int i=1; i<=num;i++){
		for(int j=5; j>=1;j--){
			if(j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
					
		}
		printf("\n");
	}
	
}