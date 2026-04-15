/*7. Print a Floyd’s triangle pattern
Input: n = 4*/
void main(){
	int n=1;
	int num=4;
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i>=j){
				printf(" %d ",n);
				n++;
			}
		}
		printf("\n");
	}
}