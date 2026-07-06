//9.mystrstr

char* mystrstr(char *str, char check[])
{
	int i = 0, j;

	while(str[i] != '\0')
	{
		j = 0;

		while(check[j] != '\0' && str[i + j] == check[j])
		{
			j++;
		}

		if(check[j] == '\0')
			return &str[i];

		i++;
	}

	return "Not Found!";
}

void main()
{
	char str[] = "Hello Programmers";

	char *newStr = mystrstr(str, "Program");

	printf("%s", newStr);
}