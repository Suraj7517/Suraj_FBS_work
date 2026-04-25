//4. Print strong numbers in the given range 1 to n.
void strong();
void main()
{
    strong();
}
void strong(){
	int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int j = 1; j <= num; j++)
    {
        int sum = 0;
        int temp = j;

        while (temp > 0)
        {
            int digit = temp % 10;

            int fact = 1;
            for (int i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == j)
        {
            printf("%d\n", j);
        }
    }

}