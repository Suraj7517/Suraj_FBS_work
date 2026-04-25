/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
void table();
void main(){
	table();
}
void table(){
	int no=5,i=1;
	while(i<=10){
		printf("%d ",no*i);
		i++;
	}
}