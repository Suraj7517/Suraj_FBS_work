/*6. Print a half pyramid using numbers
Input: n = 5*/

void main(){
	int num=5;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==j || i>=j){
				printf("%d",j);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}