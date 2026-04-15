/*Q5.Print an inverted pyramid pattern
Input: n = 5.*/

void main(){
	int n = 5;
    for(int i = 1; i <= n; i++) {

        for(int s = 1; s <= i-1; s++) {
            printf(" ");
        }

        for(int j = i; j <= n; j++) {
            printf("* ");
        }

        printf("\n");
}
}