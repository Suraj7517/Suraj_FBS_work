/*4. pyramid pattern
Input: n = 5*/

void main(){
	int num=5;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==j || i>=j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}