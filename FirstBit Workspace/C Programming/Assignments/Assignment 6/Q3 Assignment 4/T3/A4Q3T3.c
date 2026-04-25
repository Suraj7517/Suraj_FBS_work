//3. Print perfect numbers in the given range 1 to n.
void perfect(int);
void main()
{
	int num; 
    printf("Enter a number : ");
    scanf("%d", &num);
    perfect(num);
}
void perfect(int num){
	
for(int j=1;j<=num;j++){
	int sum = 0;
    for (int i = 1; i <=j/2; i++)
    {
        if (j % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == j)
    {
        printf("%d\n",j);
    }
}
}