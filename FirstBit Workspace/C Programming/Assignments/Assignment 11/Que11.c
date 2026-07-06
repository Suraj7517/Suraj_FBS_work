//mystrchr

#include <stdio.h>

char* mystrchr(char str[], char ch)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == ch)
			return &str[i];

		i++;
	}

	return NULL;
}

void main()
{
	char str[] = "Hello";

	char *ptr = mystrchr(str, 'l');

	if(ptr != NULL)
		printf("%s", ptr);
	else
		printf("Character Not Found!");
}