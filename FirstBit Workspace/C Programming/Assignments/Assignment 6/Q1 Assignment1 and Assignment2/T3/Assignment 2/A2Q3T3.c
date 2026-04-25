//3. Write a program to find greatest of three numbers using nested if-else.
void check(int,int,int);
void main(){
	int a=14,b=16,c=21;
	check(a,b,c);
}
void check(int a,int b,int c){
	
	if(a>b){
		if(a>c){
			printf("a is grater than others");
		}
		else
			printf("c is grater than others");
				
	}
	else if(a<b){
		if(b>c){
			printf("b is grater than others");
		}
		else
		printf("c is grter than others");
	}
	
}