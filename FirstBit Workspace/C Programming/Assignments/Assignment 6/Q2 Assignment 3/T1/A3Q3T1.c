/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/

void sum();
void main(){
	sum();
}
void sum(){
	int no=1,sum=0;
	while(no<=5){
		sum=sum+no;
		no++;
	}
	printf("%d",sum);
}