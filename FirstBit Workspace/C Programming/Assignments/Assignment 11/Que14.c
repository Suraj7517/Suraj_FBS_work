//mystrnstr
#include <stdio.h>

char* mystrnstr(char str[], char check[], int n)
{
	int i, j;

	for(i = 0; i < n && str[i] != '\0'; i++)
	{
		j = 0;

		while(check[j] != '\0' &&
			  (i + j) < n &&
			  str[i + j] == check[j])
		{
			j++;
		}

		if(check[j] == '\0')
			return &str[i];
	}

	return NULL;
}

void main()
{
	char str[] = "Hello Programmers";

	char *p = mystrnstr(str, "Program", 17);

	if(p != NULL)
		printf("%s", p);
	else
		printf("Not Found!");
}