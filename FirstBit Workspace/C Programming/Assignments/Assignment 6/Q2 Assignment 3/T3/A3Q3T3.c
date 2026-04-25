/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/

void sum(int,int);
void main(){
	int start=1,end=5;
	sum(start,end);
}
void sum(int start,int end){
	int sum=0;
	while(start<=end){
		sum=sum+start;
		start++;
	}
	printf("%d",sum);
}